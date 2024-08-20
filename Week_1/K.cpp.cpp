/* 
K
                2
                -3 6
                4 2


*/



#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);


    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }


    for (int i = 0; i < n; ++i) {
        cin >> B[i];
    }


    long long inner_product = 0;
    for (int i = 0; i < n; ++i) {
        inner_product += (A[i]) * B[i];
    }

    if (inner_product == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
