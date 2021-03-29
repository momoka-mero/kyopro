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

int bubbleSwaps(vi array){
    int count=0;
    int n = array.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(array.at(j) > array.at(j+1)){
                swap(array.at(j),array.at(j+1));
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vi array(n);

    for (int i = 0; i < n; i++){
        cin >> array.at(i);
    }

    int kekka = bubbleSwaps(array);
    cout << kekka;
    
}

    

