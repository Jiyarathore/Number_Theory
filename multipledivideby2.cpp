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
    int n=5;
    cout<<(n>>1)<<endl; //right shift se divide by 2 
    cout<<(n<<1)<<endl; // left shift se multiply by 2

    // 2
    // 10

    // 101 be the number 5
    // 10 -- 2
    // 1010 -- 10
}