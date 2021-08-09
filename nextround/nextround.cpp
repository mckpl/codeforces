#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    // number of contestants
    int n {};
    // special contestant
    int k {};
    std::cin >> n >> k;

    // dynamic array with scores
    std::vector<int> scores (n);
    for (int i {0}; i < n; ++i)
    {
        std::cin >> scores[i];
    }
    
    int countOfContestansA {};
    int kValue{scores[k-1]};
    for (int i {0}; i < n; ++i)
    {
        if (scores[i] > 0 && scores[i] >= kValue)
        {
            ++countOfContestansA;
        }
        else 
        {
            break;
        }
    }
    
    std::cout << countOfContestansA << '\n';

    return 0;
}