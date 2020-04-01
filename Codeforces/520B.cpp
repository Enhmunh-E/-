#include <iostream>
using namespace std;
int main () {
    int n, m, h = 0;
    cin >> n >> m;
    while (n != m) {
        if (m > n) {
            if (m % 2 == 0) {
                m = m / 2;
                h++;
            } else{   
                m++;
                h++;
            }
        }else {
            m++;
            h++;
        }   
    }
    cout << h << endl;
    return 0;
}