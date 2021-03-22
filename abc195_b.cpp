#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){

    int A,B,W;
    cin >> A >> B >> W;

    // AN <= 1000*W <= BN
    int m = 0;
    int M = 1000000;

    for(int N=1;N<=1000000;N++){
        if(A*N <= 1000*W && 1000*W <= B*N){
            M = min(M,N);
            m = max(m,N);
        }
    }
    if(m == 0){
        cout << "UNSATISFIABLE";
    }
    else{
        cout << M << " " << m ;
    }
    

}