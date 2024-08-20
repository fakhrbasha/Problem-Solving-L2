/*
    super_digit(P) = super_digit(148148148)
               = super_digit(1+4+8+1+4+8+1+4+8)
               = super_digit(39)
               = super_digit(3+9)
               = super_digit(12)
               = super_digit(1+2)
               = super_digit(3)
               = 3
*/

#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int summ(ll sum) {
    ll res = 0;
    while (sum) {
        res += sum % 10;
        sum /= 10;
    }
    return res;
}
int super_digit(ll sum) {
    if (sum / 10 == 0)
        return sum;

    return super_digit(summ(sum));
}



int main() {
    string n;
    ll k;
    cin >> n >> k;
    ll sum = 0;
    for (int i = 0; i < n.size(); i++) {
        sum += (n[i] - '0');
    }
    cout << super_digit(1LL * sum * k);

}
