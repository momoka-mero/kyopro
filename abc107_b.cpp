#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())
typedef vector<int> vi;

int main(){
    int H,W;
    cin >> H >> W;

    vector<vector<char>> data(H, vector<char>(W)); //行数・列数の順番

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    vector<bool> row(H, false);
    vector<bool> col(W, false);
    rep(i,H)
    {
        rep(j,W){
            if(data.at(i).at(j) == '#'){
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < H; i++){
        if(row[i]){
            for (int j = 0; j < W; j++){
                if(col[j]){
                    cout << data.at(i).at(j);
                }
            }
        }
        cout << endl;
    }

    
    



    
    
}