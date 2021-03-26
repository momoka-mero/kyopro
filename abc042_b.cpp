#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())
typedef vector<int> vi;




int main(){
    int N,L;

    cin >> N >> L;
    vector<string> s(N);


    rep(i,N)
    {
        cin >> s.at(i);
    }
    sort(s.begin(),s.end());

    rep(i,N)
    {
        cout << s.at(i);
    }


}