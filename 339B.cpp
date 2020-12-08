#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int haana = 1;
    int move = 0;
    for (int i = 0; i < m; i++) {
        int odoo;
        cin >> odoo;
        if (odoo >= haana) {
            move = move + odoo - haana;
        }else {
            move = move + n - haana + odoo;
        }
        haana = odoo;
    }

    cout << move << endl;
    return 0;
}