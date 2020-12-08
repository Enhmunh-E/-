#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int n;
    vector <int> a;
    cin >> n;
    int bair[n+1];
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
    }
    bair[n] = 0;
    int k = 1;
    int hed = 1;
    for (int i = 0; i < n; i++) {
        if (bair[i] <= bair[i+1]) {
            k++;
            hed++;
        }else {
            a.push_back(k);
            k = 1;
        }
    }
    if (a.size() == 0) {
        a.push_back(hed);
    }
    if (a.size() == 1) {
        cout << a[0] << endl;
    }else {
        int h = a[0];
        for (int i = 1; i < a.size(); i++) {
            if (h < a[i]) {
                h = a[i];
            }
        }
        cout << h << endl;
    }
    return 0;
}