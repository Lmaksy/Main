#include<bits/stdc++.h>
void solve() {
    int a, b;
    std::cin >> a;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            if (j == 0 || j == i) {
                std::cout << 1<<" ";
            }
            else {
                std::cout << 0<<" ";
            }
        }
        std::cout << std::endl;
    }
}
int main(){
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
