#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    while (n--) {
        string a;
        cin >> a;
        for (int i = 0; i < a.size(); i++) {
            cout << a[i];
            i++; 
        }
        cout << a[a.size()-1] << "\n"; 
    }
}