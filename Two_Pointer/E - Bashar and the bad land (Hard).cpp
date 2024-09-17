#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int v[N];
int main() {
    int n, x; cin >> n >> x;
    for (int i = 0; i < n; i++)cin >> v[i];
    int mn = n + 1;
    int sum = 0, left = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        while (sum >= x) {
            mn = min(mn, i - left + 1);
            sum -= v[left];
            left++;
        }
    }
    cout << (mn == n + 1 ? -1 : mn) << endl;
}