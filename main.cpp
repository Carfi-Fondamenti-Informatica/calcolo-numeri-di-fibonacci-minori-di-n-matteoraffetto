
#include <iostream>
using namespace std;
int main() {
    int n = 0, a = 0, b = 1, c = 0, risultato =0;
    cin >> n;
    cout << "1" << endl;
    if (risultato < n) {
        for (int i = 0; i <= (n - 2); i++) {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
        }

        return 0;
    }
}







