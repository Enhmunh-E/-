#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> t1, t2, t3;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) t1.push_back(i+1);
        else if (a[i] == 2) t2.push_back(i+1);
        else t3.push_back(i+1);
    }
    int h = 0;
    if (t1.size() <= t2.size() && t1.size() <= t3.size()) {
        h = t1.size();
    }else if (t2.size() <= t1.size() && t2.size() <= t3.size()) {
        h = t2.size();
    }else {
        h = t3.size();
    }
    cout << h << "\n";
    if (h != 0) {
    for (int i = 0; i < h; i++) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << "\n"; 
    }
    }
}