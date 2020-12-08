#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    string a, b, d, n;
    cin >> a >> b >> n;
    d = a + b;
    for_each(d.begin(), d.end(), [](char & c) {
		c = tolower(c);
	});
    for_each(n.begin(), n.end(), [](char & c) {
		c = tolower(c);
	});
    int bair[26];
    int arr[26];
    for (int i = 0; i < 26; i++) {
        bair[i] = 0;
        arr[i] = 0;
    }
    for (int i = 0; i < d.size(); i++) {
        for (int j = 97; j <= 122; j++) {
            if (char(d[i]) == j) {
                bair[j-97]++; 
            }
        }
    }
    for (int i = 0; i < n.size(); i++) {
        for (int j = 97; j <= 122; j++) {
            if (char(n[i]) == j) {
                arr[j-97]++; 
            }
        }
    }
    int x = 0;
    for (int i = 0; i < 26; i++) {
        if (bair[i] == arr[i]) {
            x++;
        }
    }
    if (x == 26) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}