#include <iostream>
using namespace std;
int main () {
    string s;
    int n;
    cin >> s;
    cin >> n;
    int lr[n][2];
    for (int i = 0; i < n; i++) {
        cin >> lr[i][0] >> lr[i][1];
        int k = 0;
        lr[i][0]--; lr[i][1]--;
        for (int j = lr[i][0]; j < lr[i][1]; j++) {
            if (s[j] == s[j+1]) {
                k++;
            }
        }
        cout << k << "\n";
    }
    return 0;
}