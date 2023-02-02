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
    printBinary(59);
    int a=59;
    int i=4;
    int b=(a & (~((1<<(i+1))-1)));
    printBinary(b);

    // clear MSB
    i=3;
    int c=(a & ((1<<(i+1))-1));
    printBinary(c);
}
// 00000111011
// 00000100000 LSB clear
// 00000001011 MSB clear