#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n{};
    std::cin >> n;

    std::vector<std::string> words (n); 

    for (int i {0}; i < words.size(); ++i)
    {
        std::cin >> words[i];

        if (words[i].size() > 10)
        {
            std::stringstream strCharsBetween;
            strCharsBetween << (words[i].size() - 2);

            words[i] = words[i][0] + strCharsBetween.str() + words[i][words[i].size() - 1];
        }
    }

    for (const std::string& word : words)
    {
        std::cout << word << '\n';
    }

    

    return 0;
}