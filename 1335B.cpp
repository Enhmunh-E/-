#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<char> cs;
        for (char i = 97; i < 97+min(26, b); i++) {
            cs.push_back(i);
        }
        int i = 0;
        while (n > 0) {
            cout << cs[i];
            n--;
            i++;
            if (i == b) {
                i = 0;
            }
        }
        cout << "\n";
    }
}