#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    map<string, int> m;
    for (const auto& v: clothes)
    {
        string kind = v[1];
        m[kind]++;
    }
    
    int answer = 1;
    for (const auto& pair : m)
    {
        answer *= (pair.second + 1);
    }
    
    return answer - 1;
}