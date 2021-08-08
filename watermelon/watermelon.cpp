#include <iostream>

int main()
{
    int kilos{};

    std::cin >> kilos;
    
    if (kilos > 2 && kilos % 2 == 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }


    return 0;
}