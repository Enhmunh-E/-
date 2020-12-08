#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main () {
    long n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<long> e;
    vector<long> f;
    // while (a > 0) {
    //     e.push_back(a%10);
    //     f.push_back(b%10);
    //     a = a / 10;
    //     b = b / 10;
    // }
    for (int i = 0; i < n; i++) {
        char t = a[i];
        int o = (int)t;
        e.push_back(o);
        t = b[i];
        o = (int)t;
        f.push_back(o);
    }
    long long hed = 0;
    for (int i = 0; i < n; i++) {
        if (e[i] > f[i]) {
            if (e[i]-f[i] >= 10-e[i]+f[i]) {
                hed = hed + (10-e[i]+f[i]);
            }else {
                hed = hed + e[i]-f[i];
            }
        }else {
            if (f[i]-e[i] >= 10-f[i]+e[i]) {
                hed = hed + (10-f[i]+e[i]);
            }else {
                hed = hed + f[i]-e[i];
            }
        }

    }
    cout << hed << endl;
    return 0;
}