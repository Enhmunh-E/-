#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        vector<long long> c;
        c.push_back(abs(x-y)*a+(max(x, y)-abs(x-y))*b);
        c.push_back(a*x+a*y);
        c.push_back(abs(x-y)*a+(max(x, y)-abs(x-y))*(a+b));
        sort(c.begin(), c.end());
        cout << c[0] << "\n";
    }
}