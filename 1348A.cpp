#include <iostream>
using namespace std;
int main () {
    int t;
    cin >> t;
    long long a[31];
    a[0] = 2;
    a[1] = 6;
    for (int i = 2; i <= 30; i++) {
        a[i] = a[i-1]+(a[i-1]-a[i-2])*2;
    }
    while (t--) {
        int n;
        cin >> n;
        cout << a[n/2-1] << "\n";
    }
}