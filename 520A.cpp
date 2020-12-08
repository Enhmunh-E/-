#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n, niit = 0;
    char a[100];
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 65 && a[i] <= 90) {
            a[i] = 32+a[i];
        }
    }
    sort(a,a+n);
    for (int i = 0; i < n-1; i++) {
        if (a[i] != a[i+1]) {
            niit++;
        }
    }
    if (niit == 25) {
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}