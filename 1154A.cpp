#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int a[4]; 
    int v[3];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a+4);
    v[0] = a[3]-a[0];
    v[1] = a[1] - v[0];
    v[2] = a[2] - v[0];
    sort(v, v+3);
    cout << v[0] << " " << v[1] << " " << v[2] << "\n";

    return 0;
}