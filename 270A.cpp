//180∘×(n−2)
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int bair[n];
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
    }
    for (int i = 0; i < n; i++) {
        if (360%(180-bair[i]) == 0) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}