#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    // Combine sequences A and B
    vector<int> combined;
    combined.reserve(N + M);
    combined.insert(combined.end(), A.begin(), A.end());
    combined.insert(combined.end(), B.begin(), B.end());

    // Sort the combined vector
    sort(combined.begin(), combined.end());

    // Check for consecutive elements from A in the sorted vector
    for (int i = 1; i < combined.size(); ++i) {
        if (find(A.begin(), A.end(), combined[i-1]) != A.end() && 
            find(A.begin(), A.end(), combined[i]) != A.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
