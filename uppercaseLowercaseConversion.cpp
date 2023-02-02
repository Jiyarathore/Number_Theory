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
    for(char c='A';c<='E';c++){
        cout<<c<<endl;
        printBinary(int(c));
    }

    for(char c='a';c<='e';c++){
        cout<<c<<endl;
        printBinary(int(c));
    }

    // convert uppercase to lower using bit manipulation
    char C='A';
    char c= C | (1<<5);
    cout<<c<<endl; //a is input

    // lower to upper
    cout<< char(c& (~(1<<5)))<<endl; //A is input

    // blank space
    cout<< char(1<<5)<<endl; // this comes out to be 32 which is ascii value of balnk space 

    cout<<char('C' | ' ')<<endl; // c will get printed

    printBinary(int('_')); //underscore ki binary 00001011111

    cout<<char('c' & '_')<<endl; // C print hoga
}


    // we can see from input that in uppercase and lowercase binary represnetation there is only difference of 5th bit in uppercase it's unset and in lowercse its set
// A
// 00001000001
// B
// 00001000010
// C
// 00001000011
// D
// 00001000100
// E
// 00001000101
// a
// 00001100001
// b
// 00001100010
// c
// 00001100011
// d
// 00001100100
// e
// 00001100101