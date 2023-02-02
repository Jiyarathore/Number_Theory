#include <bits/stdc++.h>
using namespace std;

int main(){
int a=4,b=6;

    a = a ^ b;
b= b ^ a; // b-->a
//b= b ^ (a ^ b) ==> b^b^a==> a

a = a ^ b; // a-->b
// a = (a ^ b) ^ a==> a^a^b-->b
cout<<a<<" "<<b; // 6 4
}
// 0 0 --> 0
// 1 0 --> 1
// 0 1 --> 1
// 1 1 --> 0

// x^x == 0
// x^0 == x

//--------

// x^y^z==x^z^y==y^x^z