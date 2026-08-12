#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_x = 0;
    int max_y = 0;
    
    for (const auto& size: sizes)
    {
        int x = max(size[0], size[1]);
        int y = min(size[0], size[1]);
        
        max_x = max(max_x, x);
        max_y = max(max_y, y);
    }
    
    return max_x * max_y;
}