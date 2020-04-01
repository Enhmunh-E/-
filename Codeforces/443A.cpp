#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    vector <char> a;
    string n;
    getline( cin, n);
    for (int i = 0; i < n.size() ;i++) {
        if (n[i] != '{' && n[i] != '}' && n[i] != ',' && n[i] != ' ') {
            int h = 0;
            for (int j = 0; j < a.size(); j++) {
                if (a[j] == n[i]) {
                    h = 1;
                }
            }
            if (h == 0) {
                a.push_back(n[i]);
            }
            h = 0;
        }
    }
    cout << a.size() << endl;
    return 0;
}