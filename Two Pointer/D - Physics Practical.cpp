#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <tr2/dynamic_bitset>
using namespace __gnu_pbds; // for ordered set
using namespace std; // global name space
using namespace tr2; // for dynamic_bitset<>
#define line '\n'
typedef long long ll;
typedef long double ld;
#define fakhr ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define twodot fixed << std::setprecision(1)
bool valid(long long i, long long j, long long n, long long m) { return i >= 0 && i < n && j >= 0 && j < m; }
long long mul(long long x, long long y, const long long& mod) { return ((x % mod) * (y % mod)) % mod; }
long long add(long long x, long long y, const long long& mod) { return (((x % mod) + (y % mod)) % mod + mod) % mod; }
ll SafeMul(ll a, ll b, ll m) { if (b == 0)return 0; ll res = SafeMul(a, b / 2, m); res = add(res, res, m); if (b & 1)return add(res, a, m); else return res; }
long long fast_power(long long base, long long power, const long long& m = INT64_MAX) { if (power == 1 || power == 0)return base * power + (!power); long long res = (fast_power(base, power / 2, m) % m) % m; if (power & 1)return mul(base, mul(res, res, m), m); else return mul(res, res, m); }
int log2_floor(long long i) { return i ? __builtin_clzll(1) - __builtin_clzll(i) : 0; }
int power_of_2(int n) { return __builtin_popcountll(n) == 1; }
bool line_checking(int a1, int b1, int a2, int b2, int a3, int b3) { return (b2 - b1) * (a2 - a3) == (b2 - b3) * (a2 - a1); }
pair<int, int> rotate(int i, int j, int n) { return make_pair(j, n - 1 - i); }
const int N = 3e5 + 5;
const int mod = 1e9 + 7;
// const int mod = 998244353;
const ll inf = 1e18;
const double pi = 3.14159265350979323846, eps = 1e-12;
const int dx[]{ 0, 0 , 1 ,-1 }, dy[]{ 1 , -1 , 0 , 0 };// right left down up
string dir = "RLDU";
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using ordered_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ----------------------------------------------------
// twosum brute force  O(n*n) Sorted Arrat Two-sum problem:
bool twosum1(vector<int>& A, int Target) {
    for (int i = 0; i < A.size(); i++) {
        for (int j = i + 1; j < A.size(); j++) {
            if (A[i] + A[j] > Target) {
                break;
            }
            if (A[i] + A[j] == Target) {
                return true;
            }
        }
    }
    return false;
}
// Two Pointer TEQ Sorted Arrat
bool twosum2(vector<int>& A, int Target) {
    int j = A.size() - 1;
    for (int i = 0; i < j; i++) {
        while (j > i && A[i] + A[j] > Target) {
            j--;
        }
        if (A[i] + A[j] == Target) {
            return true;
        }
    }
    return false;
}


// -----------------------------------------------------
// SubarraySum O(n*n)
void subarraysum(vector<int>& A, int Target) {
    for (int i = 0; i < A.size(); i++) {
        int sum = 0;
        for (int e = i; e < A.size(); e++) {
            sum += A[e];
            if (sum >= Target) {
                break;
            }
            if (sum == Target) {
                cout << i << " " << e << line;
                return;
            }
        }
    }
    cout << -1 << line;

}
/* ----------------------- SubArraySum Two Pointer O(N) ------------------------------ */

void subarraysum2(vector<int>& A, int T) {
    int s = 0, e = 0, sum = 0;
    while (s < A.size()) {
        // keep expanding E as long as the new sum <= T
        while (e < A.size() && sum + A[e] <= T) {
            sum += A[e];
            e++;
        }
        // we found a solution
        if (sum == T) {
            cout << s << " " << e << line;
            return;
        }
        sum -= A[s];// remove the front element
        s++; // move S one step forward
    }
    cout << -1 << line;
}
const int F = 5e5 + 10;
int v[F];
signed main() {
    fakhr
        // Two Pointer
        // Week 5
        freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    int left = 0, right = 0;
    int res = 1;
    while (right < n) {
        while (v[left] * 2 < v[right]) { left++; }
        // valid equation
        res = max(res, right - left + 1);
        right++;
    }
    cout << n - res << endl;
}


