#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end
typedef long long int ll;
typedef vector<int> vi;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    for (int i = 1; i <= B; i++){
        if((A*i)%B == C){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
}