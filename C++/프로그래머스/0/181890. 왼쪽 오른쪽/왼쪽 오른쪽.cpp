#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> v(0);
    for (int i = 0; i < str_list.size(); i++)
    {
        string str = str_list[i];
        if (str == "l")
        {
            for (int j = 0; j < i; j++)
            {
                v.push_back(str_list[j]);
            }
            
            break;
        }
        else if (str == "r")
        {
            if (i + 1 < str_list.size())
            {
                for (int j = i + 1; j < str_list.size(); j++)
                {
                    v.push_back(str_list[j]);
                }
            }
            
            break;
        }
    }
    
    return v;
}