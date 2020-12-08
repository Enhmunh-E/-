#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, a, b, c, shir = 0;
	cin >> n >> a >> b >> c;
	for (int i = 0; i*a <= n; i++) {
		for (int j = 0; i*a + j*b <= n; j++) {
			int k = (n - i*a - j*b)/c;
			if (i*a + j*b + k*c == n) {
                if (i+j+k > shir) {
                    shir = i+j+k;
                }
            }
		}
	}
	cout << shir <<"\n";
    return 0;
}