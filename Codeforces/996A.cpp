#include <iostream>
#include <vector>
using namespace std;
int main () {
    long long n;
    cin >> n;
    vector<long> a;
    a.push_back(100); 
    a.push_back(20); 
    a.push_back(10); 
    a.push_back(5); 
    a.push_back(1);
    long bill = 0;
    for(long i = 0; i < a.size(); i++){
        bill = bill + (n / a[i]); 
        n = n % a[i];
    }
    cout << bill << endl;
}