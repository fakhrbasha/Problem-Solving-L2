#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int v[N];
typedef long long ll;
ll cal(ll n) {
    return n * (n - 1) / 2;
}
int main() {
    int n, d; cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int left = 0, right = 2;
    ll res = 0;
    while (right < n) {
        if (v[right] - v[left] <= d) {
            right++;
            continue;
        }
        else {
            //[left , right] ----> valid ---> [left , right - 1]
            int number_of_points = right - left;
            number_of_points--;
            res += cal(number_of_points);
            left++;
        }
    }
    while (left < n) {
        int number_of_points = right - left;
        number_of_points--;
        res += cal(number_of_points);
        left++;
    }
    cout << res << endl;
}