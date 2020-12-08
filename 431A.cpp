#include <iostream>
using namespace std;
int main () {
    int a, b, c, d;
    string n;
    cin >> a >> b >> c >> d;
    cin >> n;
    int h = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') {
            h = h + a;
        }else if (n[i] == '2') {
            h = h + b;
        }else if (n[i] == '3') {
            h = h + c;
        }else {
            h = h + d;
        }
    }
    cout << h << endl;
    return 0;
}