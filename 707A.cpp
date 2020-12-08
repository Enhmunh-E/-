#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int c = 0;
    for (int i = 0; i < n*m; i++) {
        char a;
        cin >> a;
        if (a == 'C' || a == 'M' || a == 'Y') {
            c++;
        }
    }
    if (c == 0) {
        cout << "#Black&White" << endl;
    }else {
        cout <<  "#Color" <<endl;
    }
    return 0;
}