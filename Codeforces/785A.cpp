#include <iostream>
using namespace std;
int main () {
    int n, sum = 0;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string bair[5];
    bair[0] = "Tetrahedron";
    bair[1] = "Cube";
    bair[2] = "Octahedron";
    bair[3] = "Dodecahedron";
    bair[4] = "Icosahedron";
    for (int i = 0; i < n; i++) {
        if (a[i] == bair[0]) {
            sum = sum + 4;
        }else if (a[i] == bair[1]) {
            sum = sum + 6;
        }else if (a[i] == bair[2]) {
            sum = sum + 8;
        }else if (a[i] == bair[3]) {
            sum = sum + 12;
        }else if (a[i] == bair[4]) {
            sum = sum + 20;
        }
    }
    cout << sum << endl;
    return 0;
}