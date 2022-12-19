#include <bits/stdc++.h>
int main(){int n, k, f_i, t_i, mx = -1000000000, res_i;
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        std::cin >> f_i >> t_i;
        if (t_i > k) {
            res_i = (f_i - (t_i - k));
        }
        else {
            res_i = f_i;
        }
        mx = std::max(mx, res_i);
    }
    std::cout << mx;}
