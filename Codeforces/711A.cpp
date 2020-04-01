#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    string a[n];
    int seat = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i][0] == 'O' && a[i][1] == 'O') {
            seat++;
        }
        if (a[i][3] == 'O' && a[i][4] == 'O') {
            seat++;
        }
    }
    if (seat == 0) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            if (a[i][0] == 'O' && a[i][1] == 'O') {
                a[i][0] = '+'; a[i][1] = '+';
                break;
            }
            if (a[i][3] == 'O' && a[i][4] == 'O') {
                a[i][3] = '+'; a[i][4] = '+';
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << endl;
        }
    }
    return 0;
}