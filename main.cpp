#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int a=0;
    int b = 1;
    int c = a+b;
    cin >> n;
    cout << "1" << endl;
        for (int i = 3; i <= n; i++) {
            cout << c << endl;
            a = b;
            b = c;
            c = a + b;
        }
        return 0;
    }
