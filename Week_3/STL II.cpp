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


signed main() {
    fakhr

        // STL II

           /* set
            * always sorted

               set<datatype>name; ->  set <int> st ;
               int x ; cin >> x;
               st.insert(x);
               st.erase(x);
               st.find(x);
               st.end();
               cout << *st.begin(); First element
               cout << *st.rbegin() ; Last Element

               find
               if( st.find(x) != st.end() ){     if i want return element *st.find(x)
                   cout << "FOUND";
               }

            */
            /* Multiset
             *multiset<int>st; // same set but allow duplecate
            st={3,3,3,8,9,11,23};
            st.extract(3); // remove copy one element
            for(auto i : st) {
                cout << i << " ";
            } cout << line;
            cout << st.count(3); // o(log(n)+freq[x])*/
            /*pair
            <type of first , type of second> name ;  -> pair <string,int> p ;*/
            /*map
             *Key : Value
             p<int , int> mp;
           mp[2]=4;
           cout << mp[2] << line;
           mp.insert({4,22});  // mp.insert({key,value});
           cout << mp[4]<<line;


           mp.erase(4);  // MP.ERASE.(KEY);


           map<string , int> fr;
          fr["Apple"] = 10;
          fr["Banana"] = 4;
          fr["Moz"] = 90;
          fr["WaterMelon"] = 34;
          fr.insert({"Orange",2});
          cout << fr["Apple"] << line;
          fr.erase("Orange");
          auto it = fr.find("Apple");
          if(it!=fr.end()) {
              cout << it->first << " " << it->second << line;
          }
          auto itt = fr.find("Banana");
          if(itt!=fr.end()) {
              cout << itt->first << " " << itt->second << line;
          }
              cout << "\nTravrseing\n";
          for(auto i : fr) {
              cout << i.first << " " << i.second << line;
          }
           */
           /*Freq map
           map<string,int>mp;
           int n ; cin >> n;
           for(int i=0;i<n;i++) {
               string s ; cin >> s;
               mp[s]++;
           }
           string t ; cin >> t;
           cout << mp[t]<<line;
           
           
           }
           */