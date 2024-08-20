// R - uNrEaDaBlE sTrInG

#include <iostream>
#include <string>

using namespace std;

bool isHardToRead(const string& s) {
    for (size_t i = 0; i < s.size(); ++i) {
         // even          U                     odd           lower
        if ((i % 2 == 0 && !islower(s[i])) || (i % 2 == 1 && !isupper(s[i]))) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if (isHardToRead(s)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
