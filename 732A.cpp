#include <iostream>
using namespace std;
int main() {
    int k, r, h = 1;
    cin >> k >> r;
    for (int i = 1; i > 0; i++) {
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            cout << i << endl;
            break;
        }
    }
}
