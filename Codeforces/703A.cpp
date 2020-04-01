#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int mishka = 0, chris = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            mishka++;
        }else if (x < y) {
            chris++;
        }
    }
    if (mishka > chris) {
        cout << "Mishka" << endl;
    }else if (mishka < chris) {
        cout << "Chris" << endl;
    }else {
        cout << "Friendship is magic!^^";
    }
    return 0;
}