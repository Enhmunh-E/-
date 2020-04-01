#include <iostream>
using namespace std;
int main () {
    string s;
    int m;
    cin >> s;
    cin >> m;
    int lr[m][2];
    for (int i = 0; i < m; i++) {
        cin >> lr[i][0] >> lr[i][1];
    }
    for (int i = 0; i < m; i++) {
        int hed = 0;
        for (int j = lr[i][0]; j < lr[i][1]; j++) {
            if (s[j-1] == s[j]) {
                hed++;
            }
        }
        cout << hed << endl;
    }
    return 0;
}