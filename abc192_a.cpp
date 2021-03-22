#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
    int X;
    cin >> X;

    int count = 0;
    rep(i,101){
        X++;
        count++;
        if(X%100 == 0){
            cout << count;
            break;
        }
    }

}