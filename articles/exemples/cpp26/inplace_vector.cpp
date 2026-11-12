#include <inplace_vector>
#include <iostream>

int main() {
    std::inplace_vector<int, 3> samples;
    samples.push_back(4);
    samples.push_back(9);

    std::cout << samples[1] << '\n';
}
