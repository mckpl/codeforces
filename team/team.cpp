#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n {};
    std::cin >> n;

    int numberOfImplementations {};
    while (n--)
    {
        int numberOfAgrees {};
        int isSure {};

        for (int i {0}; i < 3; ++i)
        {
            std::cin >> isSure;
            numberOfAgrees += isSure;
        }

        if (numberOfAgrees > 1)
        {
            numberOfImplementations++;
        }
    }

    std::cout << numberOfImplementations << '\n';

    return 0;
}