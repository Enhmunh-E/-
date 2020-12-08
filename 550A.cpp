#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int h = 0, k = 0, f1 = -1, f2 = -1;
    for (int i = 0; i < s.length()-2; i++) {
        string b = s.substr(i, 2);
        if (b == "AB" && k == 0) {
            f1 = i;
            h = 1;
        }else if (b == "BA" && h == 1) {
            f2 = i;
            k = 1;
        }else if (h == 0 && b == "BA") {
            f2 = i;
            h = 1;
        }else if (h == 0 && b == "AB") {
            2 = 
        }
    }
    cout << f1 << " " << f2 << "\n";
    if (abs(f1-f2) > 1 && f1 != -1 && f2 != -1) {
        cout << "YES" << "\n";
    }else {
        cout << "NO" << "\n";
    }
}