#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin >> n;
    int p = 0;
    long long sum = 0;
    while (sum < n) {
        p++;
        sum+=5*pow(2, p);
    }
    n = n - (sum-5*pow(2, (p >= 1)? p-1 : 0));
    if (n / pow(2, p-2) <= 1) {
        cout << "Sheldon" << "\n";
    }else if (n / pow(2, p-2) <= 2) {
        cout << "Leonard" << "\n";
    }else if (n / pow(2, p-2) <= 3) {
        cout << "Penny" << "\n";
    }else if (n / 4*pow(2, p-2) <= 4) {
        cout << "Rajesh" << "\n";
    }else {
        cout << "Howard" << "\n";
    }
}













































































































// if (h == 1) {
//         cout << "Sheldon" << "\n";
//     }else if (h == 2) {
//         cout << "Leonard" << "\n";
//     }else if (h == 3) {
//         cout << "Penny" << "\n";
//     }else if (h == 4) {
//         cout << "Rajesh" << "\n";
//     }else {
//         cout << "Howard" << "\n";
//     }