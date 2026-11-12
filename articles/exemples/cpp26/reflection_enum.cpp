#include <meta>
#include <string>
#include <type_traits>

enum class Color {
    red,
    green,
    blue
};

template<class E>
    requires std::is_enum_v<E>
constexpr std::string enum_to_string(E value) {
    template for (constexpr auto e : std::meta::enumerators_of(^^E)) {
        if (value == [:e:])
            return std::string(std::meta::identifier_of(e));
    }
    return "<unknown>";
}

int main() {
    return enum_to_string(Color::green) == "green" ? 0 : 1;
}
