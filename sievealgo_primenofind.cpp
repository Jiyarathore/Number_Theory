#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
// generate all prime nos till 1e7 

vector<bool>isPrime(N,1); //let assume all no.s are prime

int main(){
    isPrime[0] = isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        if(isPrime[n]){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"Not Pimre"<<endl;
        }
    }
}
// 5
// 4
// Not Pimre
// 17
// prime
// 19
// prime
// 21
// Not Pimre
// 23
// prime