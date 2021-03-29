#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())


//hackerrankのdpが解けなかったやつ


int main(){
    int n;
    cin >> n;

    int c[n],dp[n];
    const int inf = 555;


    for(int i = 1; i<= n; i++){
        cin >> c[i];
    }
    dp[0]= 0;
    dp[1] = 0;

    for(int i = 2; i<= n; i++){
        if(c[i] == 0){
            dp[i] = min(dp[i-1],dp[i-2]) +1;
        }
        else{
            dp[i] = inf;
        }
    }
    cout << dp[n];


}

 