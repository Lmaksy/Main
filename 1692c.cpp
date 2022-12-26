#include<bits/stdc++.h>
void solve() {
    int n, vr;
    std::string row;
    char ar[8][8];
    for (int i = 0; i < 8; ++i) {
        std::cin >> row;
        for (int j = 0; j < 8; ++j) {
            ar[i][j] = row[j];
        }
    }
    for (int i = 1; i < 7; ++i) {
        for (int j = 1; j < 7; ++j) {
            if (ar[i][j] == ar[i + 1][j + 1] && ar[i][j] == ar[i - 1][j + 1] && ar[i][j] == ar[i - 1][j - 1] && ar[i][j] == '#' && ar[i][j] == ar[i + 1][j - 1]) {
                std::cout << i + 1<<" "<< j + 1 << std::endl;
            }
        }
    }
}
int main(){
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
