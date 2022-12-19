#include <bits/stdc++.h>
void solve() {
    int x, y, vr;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> vr;
            if (vr == 1) {
                std::cout << abs(2 - i) + abs(2 - j);
                return;
            }
        }
    }
}
int main(){solve();}
