#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())


int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N);

    rep(i,N){
        cin >> A.at(i);
    }

    bool kekka = false;

    for (int tmp = 0; tmp < (1 << 20); tmp++) {
        bitset<20> s(tmp);
        int sum = 0;
        
        for (int i = 0; i < N; i++){
            //bit全探索部分
            if(s.test(i)){
                sum += A.at(i);
            }
        }
        if(sum == K){
            kekka = true;
        }
    }
    if(kekka){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
        
  
}

    


    
    
    
    


    
