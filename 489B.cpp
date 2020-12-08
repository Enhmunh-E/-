#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n, m, k = 0;
    cin >> n;
    int bair[n]; 
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
    }
    cin >> m;
    int bar[m];
    for (int i = 0; i < m; i++) {
        cin >> bar[i];
    }
    sort(bair, bair+n);
    sort(bar, bar+m);
    for (int i = 0; i < m; i++) {
        cin >> bar[i];
        for (int j = 0; j < n; j++) {
            if (bair[j] != 0) {
                if (bar[i]-bair[j] == 0 || bar[i]-bair[j] == 1 || bar[i]-bair[j] == -1) {
                    k++;
                    bair[j] = 0;
                    j = n;
                }
            }
        }
    }
    cout << k << "\n";
}