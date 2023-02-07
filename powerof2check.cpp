#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i) & 1);
    }
    // we did left shift of i
    cout<<endl;
}

int main(){
    int n=16;

    if (n<=0) {
        cout<<"not power of 2";
    }
    if(n & (n-1)){
        cout<<"not power of 2";
    }
    else{
        cout<<"power of 2";
    }
}
// 00010000000
// 00001111111
// and of n and n-1 is 0 so its even