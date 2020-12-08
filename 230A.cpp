#include <iostream>
using namespace std;
int main () {
    int s, n;
    cin >> s >> n;
    int dragon[n][2];
    for (int i = 0; i < n; i++) {
        cin >> dragon[i][0] >> dragon[i][1];
    }
    for (int i = 0; i < n-1; i++) {      
        for (int j = 0; j < n-i-1; j++) {
            if (dragon[j][0] > dragon[j+1][0])  {
                swap(dragon[j][0], dragon[j+1][0]);
                swap(dragon[j][1], dragon[j+1][1]);  
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (dragon[i][0] < s) {
            s = s + dragon[i][1];
        }else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}