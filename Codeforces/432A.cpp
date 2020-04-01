#include <iostream>
using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    int bair[n];
    int h = 0;
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
        if (bair[i] + k <= 5) {
            h++;
        }
    }
    cout << h / 3 << endl;
    return 0;
}