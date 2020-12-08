#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int bair[n];
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
        if (max < bair[i]) {
            max = bair[i];
        }
    }
    int hed = 0;
    for (int i = 0; i < n; i++) {
        hed = hed + (max - bair[i]);
    }
    cout << hed << endl;
    return 0;
}