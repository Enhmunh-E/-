#include <iostream>
using namespace std;
int main () {
    int n = 3;
    int bair[3];
    cin >> bair[0];
    int max = bair[0];
    int min = bair[0];
    for (int i = 1; i < n; i++) {
        cin >> bair[i];
        if (bair[i] > max) {
            max = bair[i];
        }
        if (min > bair[i]) {
            min = bair[i];
        }
    }
    cout << max - min << endl;
    return 0;
}