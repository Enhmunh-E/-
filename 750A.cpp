#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int maxt = 240 - m;
    int maxp = 0;
    if (m == 0) {
        cout << "0" << endl;
    }else {
        for (int i = 1; i <= n; i++) {
            maxp = maxp + i*5;
            if (maxp > maxt) {
                cout << i-1 << endl;
                return 0;
            }
        }
        cout << n << endl;
    }
    return 0;
}