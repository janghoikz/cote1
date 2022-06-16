#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int x, int n)
{
    vector <long long> answer{};
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = x + (x * i);
        
        answer.push_back(temp);

        std::cout << answer[i] << std::endl;
    }
    
    return answer;
}

int main()
{
    solution(2, 5);
    solution(4, 3);
    solution(-4, 2);
}

