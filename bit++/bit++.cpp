#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n {};
    std::cin >> n;

    int x {};
    std::string operation {}; // text entered by user in single iteration of while loop

    while (n--)
    {
        std::cin >> operation;

        if (operation == "X++" || operation == "++X")
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    std::cout << x << '\n';

    return 0;
}