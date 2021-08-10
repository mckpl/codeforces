#include <iostream>

void toLower(std::string& str)
{
    for (char& character : str)
    {
        if (static_cast<int>(character) >= 65 && static_cast<int>(character) <= 90)
        {
            character += 32; 
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string string1 {};
    std::string string2 {};

    std::cin >> string1 >> string2;

    int length {static_cast<int>(string1.length())};
    
    //changing string to lower case to simplify comparing
    toLower(string1);
    toLower(string2);

    for (int i {0}; i < length; ++i)
    {
        if (string1[i] < string2[i])
        {
            std::cout << "-1\n";
            return 0;
        }
        if (string1[i] > string2[i])
        {
            std::cout << "1\n";
            return 0;
        }
    }
    
    //strings are equal
    std::cout << "0\n";

    return 0;
}