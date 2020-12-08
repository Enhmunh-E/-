#include <iostream>
#include <string>
using namespace std;
int main () {
    string a;
    cin >> a;
    int t = 0, j = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 65 && 90 >= a[i]) {
            t++;
        }else {
            j++;
        }
    }
    if (a.size() == 1) {
        if (a[0] <= 90) {
            a[0] = char(a[0]+32);
        }else {
            a[0] = char(a[0]-32);
        }
        cout << a[0] << endl;
    }else if (char(a[0]) < 91 && j == a.size()-1) {
        for (int i = 0; i <= a.size(); i++) {
            if (i == 0) {
                if ( a[i] >= 65 && 90 >= a[i]) {
                }else {
                    a[i] = char(a[i]-32);
                }
            }else {
                if ( a[i] >= 97 && 122 >= a[i]) {
                }else {
                    a[i] = char(a[i]+32);
                }
            }
        }
        cout << a << endl;
    }else if (t == a.size()) {
        for (int i = 0; i < a.size(); i++) {
            a[i] = char(a[i]+32);
        }
        cout << a << endl;
    }else {
        if (j == 1 && t == a.size()-1) {
            if (char(a[0]) >= 97) {
                for (int i = 0; i <= a.size(); i++) {
                    if (i == 0) {
                        if ( a[i] >= 65 && 90 >= a[i]) {
                        }else {
                            a[i] = char(a[i]-32);
                        }
                    }else {
                        if ( a[i] >= 97 && 122 >= a[i]) {
                        }else {
                            a[i] = char(a[i]+32);
                        }
                    }
                }
            }
        }
        cout << a << endl;
    }
    return 0;
}