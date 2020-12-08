#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int max = 0, min = 0;
    int x;
    cin >> x;
    max = x;
    min = x;
    int hed  = 0;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (max < x) {
            max = x;
            hed++;
        }
        if (min > x) {
            min = x;
            hed++;
        }
    }
    cout << hed << endl;
    return 0;
}