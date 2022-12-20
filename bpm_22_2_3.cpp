#include<bits/stdc++.h>
std::string st;
bool f(int ind) {
    int u[3] = { 0, 0, 0 };
    for (int i = ind; i < ind + 3; ++i) {
        if (st[i] == '.') {
            return 0;
        }
        u[st[i] - 'A'] += 1;
    }
    if (u[0] == 1 && u[1] == 1 && u[2] == 1) {
        return 1;
    }
    return 0;
}
int main() {
    std::cin >> st;
    for (int i = 0; i < st.size() - 2; ++i) {
        if (f(i)) {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}
