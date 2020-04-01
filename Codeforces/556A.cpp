#include <iostream>
using namespace std;
int main () {
    int n;
    string a;
    cin >> n >> a;
    int x=0, y=0;
    //x - 1  y - 0
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            x++;
        }else {
            y++;
        }
    }
    if (x > y) {
        cout << x-y << endl;
    }else {
        cout << y-x << endl;  
    }
    return 0;
}