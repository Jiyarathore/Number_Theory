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
    printBinary(9); //00000001001
    int a = 9;
    int i=3;

    if((a & (1<<i)) !=0){
        cout<<"Set Bit"<<endl;
    }
    else{
        cout<<"Not set bit"<<endl;
    }

    // reverse number
    printBinary(~a); //11111110110

    //set a specific bit
    printBinary(a | (1<<1)); //00000001011

    //unset a specific bit
    printBinary( a & (~(1<<3))); //00000000001

    //toggle between bits we use XOR operator becz xor 1 ka 1 se xor 1 ko 0 bana deta aur 0 ka 1 se xor 0 ko 1 bana deta
    printBinary(a ^ (1<<2)); //00000001101
    printBinary(a ^ (1<<3)); //00000000001

    //no. of set bits in a number 
    int c=0;
    for(int i=31;i>=0;i--){
        if((a & (1<<i)) !=0){
            c++;
        }
    }
    cout<<c<<endl; //2
    //or we can use inbuild function
    cout<<__builtin_popcount(a)<<endl; //2

}
// 00000001001
// Set Bit
// 11111110110
// 00000001011
// 00000000001
// 00000001101
// 00000000001
// 2
// 2