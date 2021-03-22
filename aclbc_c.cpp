//ACL Beginner ContestのC問題
//Union Find を使って解くやつ

#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


struct UnionFind {
    vector<int> par; 

    UnionFind(int N) : par(N) { 
        rep(i,N){
            par[i] = i
        }
    }

    int root(int x) { 
        if (par[x] == x){
            return x;
        }
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { 
        int rx = root(x); 
        int ry = root(y); 
        if (rx == ry){
            return; 
        }
        par[rx] = ry; 
    }

    bool same(int x, int y) { 
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, M,count;
    cin >> N >> M;

    UnionFind tree(N);

    rep(i,M){
        int  x, y;
        cin >> x >> y;
        tree.unite(x-1, y-1);
    }


    rep(i,N){
        if(!tree.same(0,i)){
            tree.unite(0, i);
            count++;
        }
    }

    cout << count << endl;
    return 0;
}