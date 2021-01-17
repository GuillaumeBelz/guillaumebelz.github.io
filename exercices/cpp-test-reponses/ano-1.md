
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

- au lieu d'ecrire le code des fonctions a partir de `for` et `if`, tu pouvais aussi utiliser les algos de la bibliotheque standard (`std::accumulate`, `std::max_element`, etc). Je te conseille de relire regulierement la page https://en.cppreference.com/w/cpp/algorithm, juste pour avoir une idee des algos proposes et y penser quand tu en auras besoin.

- meme si ton code est correct, il n'est pas tres generique. Pour des exos, ce n'est pas tres grave, mais dans un vrai projet, cela poserait de probleme de maintenance. Imagine par exemple si tu as un `array` qui n'a pas 6 elements. Ou qui ne contient pas des `int`. Tu devras alors modifier ton code, ce qui n'est pas tres OCP (open close principle, voir les principes SOLID).

Par exemple :
```cpp
int val = 0;
// peut s'ecrire :
tableau::value_type val {};
```

- revoir aussi les templates, tu pouvais ecire pour plus de genericite :
```cpp
template<typename tableau_t>
constexpr int sum(const tableau_t& t);
```

- c'est bien d'avoir pense a `const&`.

- il n'est par contre pas necessaire de passer par `const&` et ensuite de faire une copie. Tu peux directement passer par valeur.

```cpp
constexpr tableau inverse(tableau t) // par valeur
{
    // tableau t1(t); inutile
```

- attention avec les nombres signe et non signe. Ca peut provoquer des gros bugs. Une regle importante : on ne melange jamais les 2. Un exemple classique d'erreur obtenue avec ce melange, c'est que "-1 > 1" dans certains cas.

```cpp
// ici, tu compares un signe et un non signe.
for (int i = 0; i < t.size(); i++)

// ici, tu fais des calculs avec des signe et non signe
t1[t.size() - 1 - i] = t[i];
```

- penses a activer les warnings du compilateur. Les problemes de signe/non signe sont signales par le compilateur. Par exemple clang sur ton code :

```
prog.cc:37:22: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                        t1[t.size() - 1 - i] = t[i];
                                        ~ ^
prog.cc:37:29: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                        t1[t.size() - 1 - i] = t[i];
                                               ~ ^
prog.cc:36:21: warning: comparison of integers of different signs: 'int' and 'std::array::size_type' (aka 'unsigned long') [-Wsign-compare]
                for (int i = 0; i < t.size(); i++)
                                ~ ^ ~~~~~~~~
prog.cc:62:30: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                                if (t1[j] == t1[i] && t1[j])
                                                      ~~ ^
prog.cc:62:12: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                                if (t1[j] == t1[i] && t1[j])
                                    ~~ ^
prog.cc:62:21: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                                if (t1[j] == t1[i] && t1[j])
                                             ~~ ^
prog.cc:64:9: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                                        t1[j] = 0;
                                        ~~ ^
prog.cc:70:8: warning: implicit conversion changes signedness: 'int' to 'std::array::size_type' (aka 'unsigned long') [-Wsign-conversion]
                                t1[i] = 0;
                                ~~ ^
prog.cc:56:21: warning: comparison of integers of different signs: 'int' and 'std::array::size_type' (aka 'unsigned long') [-Wsign-compare]
                for (int i = 0; i < t1.size(); i++)
                                ~ ^ ~~~~~~~~~
prog.cc:60:26: warning: comparison of integers of different signs: 'int' and 'std::array::size_type' (aka 'unsigned long') [-Wsign-compare]
                        for (int j = i + 1; j < t1.size(); j++)
                                            ~ ^ ~~~~~~~~~					    
```

- evites l'initialisation avec des parentheses. C'est pas une erreur, mais c'est piegieux. Et deconseille par les guidelines.

```cpp
tableau t1(t); // bof

tableau t1 { t }; // ok

tableau t1 = t; // acceptable
```

- ton algo pour `inverse` est correct, mais au lieu de faire une boucle qui compte de 0 a 5, tu pouvais faire une boucle qui compte de 0 a 2. Je te laisse reflechir comment faire cela.

```cpp
for (int i = 0; i < t.size(); i++)
    t1[t.size() - 1 - i] = t[i];			
```

(Aide : `std::swap`)

- ca ne sert a rien un const dans les parameteres de fonction quand tu passes par valeur.

```cpp
constexpr tableau multiply(const tableau& t, /*const*/ int x)
```

- tres bien d'avoir pense a ne pas parcourir la seconde boucle a partir de 0

```cpp
for (int j = i + 1; j < t1.size(); j++)
```

Par contre, ton algo ne fonctionne pas comme je pensais qu'il devait faire. Il affiche :

```cpp
1 0 0 5 0 0
```

Mais la consigne n'etait pas tres claire. Quand je dis "supprimer les doublons", je pensais quand meme qu'il faut garder l'un des deux. Donc obtenir par exemple :
```
1, 3, 2, 5
```

Je vais modifier le sujet.

- Boulot boulot. Tu connais les syntaxes de base sur C++. Pour aller plus loin, il faut commencer a penser ton code de maniere plus professionnelle, c'est a dire prendre en compte la qualite du code, le genericite, la maintenabilite, etc.
