#include <string>
#include <algorithm>
#include <set>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    set<int> unique_nums;
    sort(numbers.begin(), numbers.end());
    
    do {
        for (int i = 1; i <= numbers.size(); i++) {
            unique_nums.insert(stoi(numbers.substr(0, i)));
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    int prime_count = 0;
    for (int num : unique_nums) {
        if (isPrime(num)) {
            prime_count++;
        }
    }
    
    return prime_count;
}