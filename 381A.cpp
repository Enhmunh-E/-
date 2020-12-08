#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> arr;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr.push_back(tmp); 
    }
    int l = 0, r = 0;
    int i = 0;
    while (!arr.empty()) {
        if (arr[0] > arr[arr.size()-1]) {
            cout << arr[0] << "\n";
            if (i%2 == 0) {
                l+=arr[0];
                arr.erase(arr.begin());
            }else {
                r+=arr[arr.size()-1];
                arr.pop_back();
            }
        }else {
            cout << arr[arr.size()-1] << "\n";
            if (i%2 == 0) {
                l+=arr[arr.size()-1];
                arr.pop_back();
            }else {
                r+=arr[0];
                arr.erase(arr.begin());
            }
        }
        i++;
    }
    cout << l << " " << r << "\n";
}