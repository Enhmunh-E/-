#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, zeros = 0;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0) {
            bool w = false;
            for (int i = 0; i < n; i+=2) {
                char a = s[i];
                if ((int)a % 2 != 0) {
                   w = true;
                }
            }
            int d = (w)?1:2;
            cout << d << "\n";
        }else {
            bool w = false;
            for (int i = 1; i < n; i+=2) {
                char a = s[i];
                if ((int)a % 2 == 0) {
                    w = true;
                }
            }
            int d = (w)?2:1;
            cout << d << "\n";
        }
    }
}