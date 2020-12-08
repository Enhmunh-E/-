#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int candle = 0;
    for (int i = 1; i <= n; i++) {
        candle++;
        if (i % m == 0) {
            n++;
        }
    }
    cout << candle << endl;
    return 0;
}