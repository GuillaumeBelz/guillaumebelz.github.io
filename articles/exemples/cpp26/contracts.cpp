int divide(int numerator, int denominator)
    pre (denominator != 0)
{
    return numerator / denominator;
}

int main() {
    return divide(42, 2) == 21 ? 0 : 1;
}
