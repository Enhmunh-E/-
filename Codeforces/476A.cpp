#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    if (n >= m) {
        cout << (n + (2 * m) - 1) / 2 / m * m;
    }else {
        cout << "-1" << endl;
    }
    return 0;
}