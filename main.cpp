#include <iostream>
using namespace std;
int main() {
    int n = 0, a = 0, b = 1, c = a + b;
    cin >> n;
        cout << a << endl;
       
        for (int i = 3; i <= n; i++) {
            cout << c << endl;
            a = b;
            b = c;
            c = a + b;
        }
        return 0;
    }



