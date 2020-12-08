#include <iostream>
#include <unordered_map>
using namespace std;
int main () {
    int n;
    cin >> n;
    unordered_map<string, int> mp; 
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (mp.find(a) == mp.end()) {
            mp.insert(pair<string, int>(a, 0));
            cout << "OK" << "\n";
        }else {
            mp[a]++;
            cout << a << mp.at(a) << "\n";
        }
    }
    return 0;
}