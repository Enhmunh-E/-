#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[4];
    arr[0] = a+b+c;
    arr[1] = a+a+b+b;
    arr[2] = a+c+c+a;
    arr[3] = b+c+c+b;
    cout << *min_element(arr, arr+4) << endl;
    return 0;
}