#include <bits/stdc++.h>
using namespace std;
void solve() {
    vector<int> ar;
    int n, vr, sz;
    string buk;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> vr;
        ar.push_back(vr);
    }
    for (int i = 0; i < n; ++i) {
        cin >> sz >> buk;
        for (int j = 0; j < sz; ++j) {
            if (buk[j] == 'D') {
                ar[i] = (ar[i] + 1) % 10;
            }
            else {
                ar[i] = (10 + ar[i] - 1) % 10;
            }
        }
    }
    for (auto& i : ar) {
        cout << i <<" ";
    }
    cout << endl;
}
int main(){
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    };}
