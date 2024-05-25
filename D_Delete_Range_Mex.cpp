#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    vector<long long> dp(N + 1);
    dp[0] = 1;

    for (int i = 1; i <= N; ++i) {
        dp[i] = dp[i - 1] * (i - M);
        dp[i] %= MOD;
        for (int j = 0; j < M; ++j) {
            if (A[j] == i - 1) {
                dp[i] += dp[A[j]];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}
