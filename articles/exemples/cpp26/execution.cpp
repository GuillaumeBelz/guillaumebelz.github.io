#include <execution>
#include <iostream>
#include <utility>

int main() {
    auto work = std::execution::just(20)
              | std::execution::then([](int value) { return value * 2; });
    auto [result] = std::this_thread::sync_wait(std::move(work)).value();

    std::cout << result << '\n';
}
