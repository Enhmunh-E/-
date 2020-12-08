#include <iostream>
#include <vector>
using namespace std;
int main () {
    string a;
    int n, s;
    cin >> n >> s;
    cin >> a;
    vector<char> f;
    for (int i = 0; i < n; i++) {
        f.push_back(a[i]);
    }
    for (int j = 0; j < s; j++) {
        for (int i = 0; i < n-1;) {
            if (f[i] == 'B' && f[i+1] == 'G') {
                swap(f[i], f[i+1]);
                // cout << "urd ni bsan:" << f[i+1] << endl;
                // cout << "ard ni bsan:" << f[i] << endl;
                i = i + 2;
            }else {
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << f[i];
    }
    cout << endl;
    return 0;
}