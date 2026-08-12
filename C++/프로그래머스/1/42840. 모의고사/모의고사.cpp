#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> a = { 1, 2, 3, 4, 5 };
    vector<int> b = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> c = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int* result = new int[3]();
    int size = answers.size();
    for (int i = 0; i < size; i++)
    {
        if (answers[i] == a[i % a.size()]) { result[0]++; }
        if (answers[i] == b[i % b.size()]) { result[1]++; }
        if (answers[i] == c[i % c.size()]) { result[2]++; }
    }
    
    int max = *max_element(result, result + 3);
    
    vector<int> answer;
    for (int i = 0; i < 3; i++)
    {
        if (max == result[i])
        { 
            answer.push_back(i + 1);
        }
    }
    
    delete []result;
    return answer;
}