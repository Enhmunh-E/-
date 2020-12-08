#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ss second
#define ff first
#define pb push_back
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
vector<bool> p( 1e6, 0 );
void sieve() {
    for (int i = 2; i * i < 1e6; i++)
        if (!p[i])
            for (int j = i * i; j <= 1e6; j += i)
                p[j] = 1;
}
int main() {
    FAST
    int t;
    cin >> t;
    sieve();
    // vector<ll> a( t );
    ll n;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        ll k = sqrt( n );
        if (!p[k] && k * k == n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}