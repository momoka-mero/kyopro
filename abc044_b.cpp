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
   string w;
   cin >> w;

   bool ans = true;

   for (int i = 0; i < w.size(); i++){
       if(count(w.begin(), w.end(), w.at(i))% 2 != 0){
           ans = false;
           break;
       }
       
   }

    if(ans){
        cout << "Yes";
    }
    else{
       cout << "No";
    }


}