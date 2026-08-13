#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    vector<int> v;
    
    if (n == 1)
    {
        for (int i = 0; i <= b; i++)
        {
            v.push_back(num_list[i]);
        }
    }
    else if (n == 2)
    {
        for (int i = a; i < num_list.size(); i++)
        {
            v.push_back(num_list[i]);
        }
    }
    else if (n == 3)
    {
        for (int i = a; i <= b; i++)
        {
            v.push_back(num_list[i]);
        }
    }
    else if (n == 4)
    {
        for (int i = a; i <= b; i += c)
        {
            v.push_back(num_list[i]);
        }
    }
    
    return v;
}