#include<bits/stdc++.h>
long factorial(int k) {
    long w = 1;
    for (int i = 1; i <= k; ++i) {
        w *= i;
    }
    return w;
}
long  su_i(long x_i) {
    long ans_su = 0;
    int i = 0;
    long cur_xi = (pow(x_i * 2, i)) / factorial(i);
    while (cur_xi > 0.0001) {
        ans_su += cur_xi;
        i += 1;
        cur_xi = (pow(x_i * 2, i)) / factorial(i);
    }
    return ans_su;
}
int main(){
    for (double x = 0.1; x < 1 + 0.0001; x += 0.05) {
        long double ans_x_i = su_i(x);
        std:: cout << x << " " << ans_x_i << "\n";
    }}
