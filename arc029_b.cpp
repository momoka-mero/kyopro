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
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i,N){
        cin >> A.at(i);
    }

    int ans = (int) 1e9;

    for (int tmp = 0; tmp < (1 << 4); tmp++) {
        bitset<4> s(tmp);

        int niku1 = 0;
        int niku2 = 0;
        
        for (int i = 0; i < N; i++){
            //bit全探索部分
            if(s.test(i)){
                niku1 += A.at(i);
            }
            else{
                niku2 += A.at(i);
            }
        }
        ans = min(ans,max(niku1,niku2));
    }

    cout << ans << endl;


}