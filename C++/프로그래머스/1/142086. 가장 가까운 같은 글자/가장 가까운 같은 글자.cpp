#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    map<char, int> m;
    vector<int> v(s.length());
    
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        auto it = m.find(c);
        v[i] = it == m.end() ? -1 : i - it->second;
        m.insert_or_assign(c, i);
    }
    
    return v;
}
