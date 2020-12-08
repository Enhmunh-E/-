#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = 0;
        vector<int> a;
        int g = 0;
        for (int i = n; i > 0; i/=10) {
            m++; 
            if (i%10 == 0) {
                g++;
            }
            a.push_back(i%10);
        }
        if (m == 1) {
            cout << 1 << "\n";
            cout << n << "\n";
        }else {
            cout << m-g << "\n";
            // for (int i = a.size()-1; i >= 0; i--) {
            //     if (a[i] != 0) {
            //     cout << a[i];
            //     for (int j = 0; j < m-1; j++) {
            //         cout << 0;
            //     }
            //     cout << " ";
            //     }
            //     m--;
            // }
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != 0) {
                    cout << a[i];
                    for (int j = 0; j < i; j++) {
                        cout << 0;
                    } 
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
}