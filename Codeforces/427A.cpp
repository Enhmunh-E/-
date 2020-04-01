#include <iostream>
using namespace std;
int main () {
    int n, hed = 0;
    int hereg = 0;
    cin >> n;
    int bair[n];
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
        if (bair[i] == -1 && hed == 0) {
            hereg++;
        }else if (bair[i] == -1 && hed > 0) {
            hed--;
        }else if (bair[i] > 0) {
            hed = hed + bair[i];
        }
    }
    cout << hereg << endl;
    return 0;
}