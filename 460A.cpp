#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int day = 0;
    for (int i = 1; i <= n; i++) {
        day++;
        if (i % m == 0) {
            n++;
        }
    }
    cout << day << endl;
    return 0;
}