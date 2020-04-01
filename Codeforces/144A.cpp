#include <iostream>
using namespace std;
int main() {
    int n;
    int maxvalue = 0;
    int minvalue = 1000;
    int max = 0;
    int min = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a > maxvalue) {
            max = i;
            maxvalue = a;
        }
        if(a <= minvalue) {
            min = i;
            minvalue = a;
        }
    }

    if(max > min) {
        cout << (max-1)+(n-min)-1 << endl;
    }else {
        cout << (max-1)+(n-min) << endl;
    }
	return 0;
}