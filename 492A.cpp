#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int h = 0;
    int i = 1;
    int k = 0;
    while (n > 0) {
        int k = 0;
        h++;
        i++;
        for (int j = i; j >= 1; j--) {
            k = k + j;
        }
        n = n - k;
    }
    cout << h << endl;
    return 0;
}