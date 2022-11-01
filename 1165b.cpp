#include <vector>
#include<iostream>
#include<algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    int tek = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= tek) ++tek;
    }
    std::cout << tek - 1 << std::endl;
    return 0;
}
