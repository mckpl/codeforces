#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int M{}; // number of lines
    int N{}; // number of columns
    std::cin >> M >> N;

    int lastColumnExist {N % 2}; // can take only two values (0 or 1)

    int dominosInLine {N / 2}; // number of dominos in one line horizontally

    int numberOfDominos {M * dominosInLine + lastColumnExist * (M / 2)};

    std::cout << numberOfDominos << '\n';

    return 0;
}