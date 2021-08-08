#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n {};
    std::cin >> n;

    if (n > 2 && n % 2 == 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }

}