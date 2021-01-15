
# Code proposé par Ano

Le fichier `fonction.h` :

```cpp
#ifndef FONCTION_H
#define FONCTION_H

#include <iostream>
#include <array>
#include <algorithm>


using tableau = std::array<int, 6>;

namespace utils
{
	constexpr int sum(const tableau& t)
	{
		int val = 0;

		for (int i : t)
			val += i;

		return val;
	}
	
	constexpr int max(const tableau& t)
	{
		int val = 0;

		for (int i : t)
			if (i > val)
				val = i;

		return val;
	}

	constexpr tableau inverse(const tableau& t)
	{
		tableau t1(t);

		for (int i = 0; i < t.size(); i++)
			t1[t.size() - 1 - i] = t[i];

		return t1;
	}
	
	constexpr tableau multiply(const tableau& t, const int x)
	{
		tableau t1(t);

		for (int& i : t1)
			i *= x;

		return t1;
	}

	constexpr tableau unique(const tableau& t)
	{
		tableau t1(t);

		for (int i = 0; i < t1.size(); i++)
		{
			bool var = false;

			for (int j = i + 1; j < t1.size(); j++)
			{
				if (t1[j] == t1[i] && t1[j])
				{
					t1[j] = 0;
					var = true;
				}
			}

			if (var)
				t1[i] = 0;
		}

		return t1;
	}
}

#endif
```

Le fichier `main.cpp` :
```cpp
#include "fonctions.h"

int main() {
    constexpr tableau mon_tableau{ 1, 3, 2, 5, 3, 2 };

    // calcule la somme des éléments
    constexpr auto s{ utils::sum(mon_tableau) };

    // recherche la valeur maximale
    constexpr auto m{ utils::max(mon_tableau) };

    // inverse l'ordre des éléments du tableau (le premier devient le dernier, etc)
    constexpr auto t2{ utils::inverse(mon_tableau) };

    // multiplie chaque élément par une valeur constante
    constexpr tableau mon_tablau_multiplie = utils::multiply(mon_tableau, 2);

    // supprime les doublons
    constexpr auto  t3{ utils::unique(mon_tableau) };
}
```

# Mes remarques

```cpp
#ifndef FONCTION_H
```
- Attention avec les header guards trop génériques, il y a plus de chances de se retrouver avec conflits.

```cpp
#include <iostream>
#include <algorithm>
```
- Tu n'utilises pas ces includes. Attention avec les includes inutiles, cela peut avoir un impact sur les temps de compilation. Il existe des outils comme [Include What You Use](https://github.com/include-what-you-use/include-what-you-use) pour aider à nettoyer les includes.
