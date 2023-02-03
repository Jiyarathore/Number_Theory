#include<bits/stdc++.h>
using namespace std;

// 0 in boolean means fakse i.e nt a prime and 1 is prime i.e. true
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
    }
    bool is_prime = true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
cout<<is_prime;
}