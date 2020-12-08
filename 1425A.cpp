#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long s = 1, b = 0;
        while (n!= 0) {
            if (s % 2 == 0) {
                if (n%2 == 0) {
                    n/=2;
                }else {
                    n--;
                }
            }else {
                if (n%2 == 0) {
                    b+=n/2;
                    n/=2;
                }else {
                    n--;
                    b++;
                }
            }
            s++;
        }
        cout << b << "\n";
    }   
}