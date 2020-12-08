#include <iostream>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
int main () {
    long long n, l;
    cin >> n >> l;
    long double lant[n+2];
    for (int i = 1; i <= n; i++) {
        cin >> lant[i];
    }
    lant[0] = 0;
    lant[n+1] = l;
    sort(lant, lant+n+2);
    double max = INT_MIN;
    for (int i = 0; i < n+1; i++) {
        if (i == 0 || i == n) {
            if (lant[i+1]-lant[i] > max) {
                max = lant[i+1]-lant[i];
            }
        }else {
            if ((lant[i+1]-lant[i])/2 > max) {
                max = (lant[i+1]-lant[i])/2;
            }
        }
    }
    cout << fixed;
    cout << setprecision(10) << max << "\n";
}