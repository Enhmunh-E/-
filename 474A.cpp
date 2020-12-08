#include <iostream>
using namespace std;
int main () {
    char a;
    cin >> a;
    string n;
    cin >> n;
    if (a == 'R') {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == 'w') {
                n[i] = 'q';
            }else if (n[i] == 'e') {
                n[i] = 'w';
            }else if (n[i] == 'r') {
                n[i] = 'e';
            }else if (n[i] == 't') {
                n[i] = 'r';
            }else if (n[i] == 'y') {
                n[i] = 't';
            }else if (n[i] == 'u') {
                n[i] = 'y';
            }else if (n[i] == 'i') {
                n[i] = 'u';
            }else if (n[i] == 'o') {
                n[i] = 'i';
            }else if (n[i] == 'p') {
                n[i] = 'o';
            }else if (n[i] == 's') {
                n[i] = 'a';
            }else if (n[i] == 'd') {
                n[i] = 's';
            }else if (n[i] == 'f') {
                n[i] = 'd';
            }else if (n[i] == 'g') {
                n[i] = 'f';
            }else if (n[i] == 'h') {
                n[i] = 'g';
            }else if (n[i] == 'j') {
                n[i] = 'h';
            }else if (n[i] == 'k') {
                n[i] = 'j';
            }else if (n[i] == 'l') {
                n[i] = 'k';
            }else if (n[i] == ';') {
                n[i] = 'l';
            }else if (n[i] == 'z') {
                n[i] = 'z';
            }else if (n[i] == 'x') {
                n[i] = 'z';
            }else if (n[i] == 'c') {
                n[i] = 'x';
            }else if (n[i] == 'v') {
                n[i] = 'c';
            }else if (n[i] == 'b') {
                n[i] = 'v';
            }else if (n[i] == 'n') {
                n[i] = 'b';
            }else if (n[i] == 'm') {
                n[i] = 'n';
            }else if (n[i] == ',') {
                n[i] = 'm';
            }else if (n[i] == '.') {
                n[i] = ',';
            }else if (n[i] == '/') {
                n[i] = '.';
            }
        }
    }else {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == 'q') {
                n[i] = 'w';
            }else if (n[i] == 'w') {
                n[i] = 'e';
            }else if (n[i] == 'e') {
                n[i] = 'r';
            }else if (n[i] == 'r') {
                n[i] = 't';
            }else if (n[i] == 't') {
                n[i] = 'y';
            }else if (n[i] == 'y') {
                n[i] = 'u';
            }else if (n[i] == 'u') {
                n[i] = 'i';
            }else if (n[i] == 'i') {
                n[i] = 'o';
            }else if (n[i] == 'o') {
                n[i] = 'p';
            }else if (n[i] == 'a') {
                n[i] = 's';
            }else if (n[i] == 's') {
                n[i] = 'd';
            }else if (n[i] == 'd') {
                n[i] = 'f';
            }else if (n[i] == 'f') {
                n[i] = 'g';
            }else if (n[i] == 'g') {
                n[i] = 'h';
            }else if (n[i] == 'h') {
                n[i] = 'j';
            }else if (n[i] == 'j') {
                n[i] = 'k';
            }else if (n[i] == 'k') {
                n[i] = 'l';
            }else if (n[i] == 'l') {
                n[i] = ';';
            }else if (n[i] == 'z') {
                n[i] = 'x';
            }else if (n[i] == 'x') {
                n[i] = 'c';
            }else if (n[i] == 'c') {
                n[i] = 'v';
            }else if (n[i] == 'v') {
                n[i] = 'b';
            }else if (n[i] == 'b') {
                n[i] = 'n';
            }else if (n[i] == 'n') {
                n[i] = 'm';
            }else if (n[i] == 'm') {
                n[i] = ',';
            }else if (n[i] == ',') {
                n[i] = '.';
            }else if (n[i] == '.') {
                n[i] = '/';
            }
        }
    }
    cout << n << endl;
    return 0;  
}  
