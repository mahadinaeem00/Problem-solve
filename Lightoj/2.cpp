#include <iostream>
#include <vector>
using namespace std;

const int MOD = 10007;

typedef vector<vector<int>> matrix;

matrix operator* (const matrix& A, const matrix& B) {
    int n = A.size(), m = B[0].size(), p = B.size();
    matrix C(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

matrix matPow(matrix A, int p) {
    int n = A.size();
    matrix B(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        B[i][i] = 1;
    }
    while (p > 0) {
        if (p & 1) {
            B = B * A;
        }
        A = A * A;
        p >>= 1;
    }
    return B;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n

