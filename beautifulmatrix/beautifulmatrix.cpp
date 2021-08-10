#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n {};
    int i {};
    int j {};

    int row1 {};
    int column1 {};
    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            std::cin >> n;
            if (n == 1)
            {
                row1 = i;
                column1 = j;
            }
        }
    }

    int rowCenter {2};
    int columnCenter {2};

    int numberOfTransformations {abs(rowCenter-row1) + abs(columnCenter-column1)};

    std::cout << numberOfTransformations << '\n';

    return 0;
}