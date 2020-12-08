#include <iostream>
#include <cstring> 
#include <algorithm>
using namespace std;
int main () {
    long long n;
    cin >> n;
    long long countArr[100005];
    memset(countArr, 0, sizeof(countArr));
    for (long long i = 0; i < n; i++) {
        long long curr;
        cin >> curr;
        countArr[curr]++;
    } 
    long long max1 = countArr[1], max2 = countArr[0], currMax;
    for (long long i = 2; i <= 100000; i++) {
        currMax = max(max1, i*countArr[i]+max2);
        max2 = max1;
        max1 = currMax;
    }
    cout << max1 << "\n";
    return 0;
}