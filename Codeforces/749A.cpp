#include <iostream>
using namespace std;
int main () {
    int n;
	cin >> n;
    int hed = n / 2;
    cout << hed << endl;
	if (n % 2 == 0) {
		for (int i = 0; i < hed; i++) {
			cout << "2" << " ";
		}
	}else {
		for (int i = 0; i < (hed - 1); i++) {
			cout << "2" << " ";
		}
		cout << "3" << endl;
	}
	return 0;
}