#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())

//解法は思いついたけど，Rangecheckで時間を溶かしてしまった問題


int main(){
    int h,w,x,y;

    cin >> h >> w >> x >> y;
    vector<vector<char>> data(h+1, vector<char>(w+1));

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> data.at(i).at(j);
        }
        
    }

    int count = 1;
    //hiku
    for (int i = x-1; i > 0 ; i--){
        if(data.at(i).at(y) == '.'){
            count++;
        }
        else{
            break;
        }
    }

    for (int j = y-1; j > 0 ; j--){
        if(data.at(x).at(j) == '.'){
            count++;
        }
        else{
            break;
        }
    }

    for (int i = x+1; i <= h; i++){
        if(data.at(i).at(y) == '.'){
            count++;
        }
        else{
            break;
        }
    }

    for (int j = y+1; j <= w; j++){
        if(data.at(x).at(j) == '.'){
            count++;
        }
        else{
            break;
        }
    }
    cout << count;

    
}