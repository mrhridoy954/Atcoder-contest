#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    if (A != B) {
        // All suspects are 1, 2, and 3
        // We know A and B are not culprits, so the culprit must be the remaining one
        for (int i = 1; i <= 3; i++) {
            if (i != A && i != B) {
                cout << i << endl;
                return 0;
            }
        }
    } else {
        // If A and B are the same, it's ambiguous who the culprit is
        cout << -1 << endl;
    }
    
    return 0;
}
