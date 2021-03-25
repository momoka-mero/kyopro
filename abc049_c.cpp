#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;

    cout << (regex_match(S, regex("(dream|dreamer|erase|eraser)*")) ? "YES" : "NO") << endl;
}