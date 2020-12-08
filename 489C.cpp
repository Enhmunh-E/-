#include <bits/stdc++.h>
using namespace std;
int main () {
    int m, s;
    cin >> m >> s;
    if (m == 1 && s == 0) {
        cout << '0' << " " << '0' << "\n"; 
    }else if (m*9 < s || s == 0){
        cout << -1 << " " << -1 << "\n";
    }else {
        string minn = "", maxx = "";
        // cout << "bga" << "\n";
        int leftside = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < 10; j++) {
                if (i != 1) {
                    if (s-(leftside+j) <= (m-i)*9) {
                        minn+=char('0'+j);
                        leftside+=j;
                        break;
                    } 
                } else {
                    if (j > 0) {
                        if (s-(leftside+j) <= (m-i)*9) {
                            minn+=char('0'+j);
                            leftside+=j;
                            break;
                        }
                    } 
                }
            }
        }
        leftside = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 9; j >= 0; j--) {
                if (s-(leftside+j) >= 0) {
                    maxx+=char('0'+j);
                    leftside+=j;
                    break;
                }
            }
        }
        cout << minn << " " << maxx << "\n";
    }
} 