#include <iostream>
#include <vector>
#include <algorithm>
void solve() {
    int n, vr;
    std::cin >> n;
    std::vector<int> ar;
    ar.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vr;
        ar[vr - 1] = i + 1;
    }
    for (auto& i : ar) {
        std::cout << i <<" ";
    }}
int main(){
        solve();}
