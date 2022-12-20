#define ALL(a) a.begin(), a.end()
typedef long long ll;
#include <bits/stdc++.h>
inline void smax(int& a, int b) { if (b > a)a = b; }
inline void smax(ll& a, ll b) { if (b > a)a = b; }
constexpr int INF = int(1e9) + 7;
using namespace std;
void solve() {
    int n, mx = -1, ind = -1;
    std::string st;
    char symb;
    std::cin >> n >> symb >> st;
    st += st;
    std::reverse(ALL(st));
    for (int i = 0; i < n + n; ++i) {
        if (st[i] == 'g') {
            ind = i;
        }
        if (st[i] == symb && ind != -1) {
            smax(mx, i - ind);
        }
    }
    std::cout << mx << std::endl;
}
int main(){
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    };}
