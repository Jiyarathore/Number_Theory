// Binary exponentiation by recursion
// f(a,b) = a^b
// f(a,b)--b is even--> f(a,b/2) * f(a,b/2)
// f(a,b)--b is odd --> a*f(a,b/2)*f(a,b/2)

#include<bits/stdc++.h>
using namespace std;

int bitExpRecur(int a, int b){
    if(b==0) return 1;
    long res = bitExpRecur(a,b/2);
    if(b&1){ //odd
    return a*res*res;
    }
    else{
        return res*res;
    }
}
int main(){
    int a=2,b=13;
    cout<<bitExpRecur(a,b);//8192
    pow(a,b);//8192
}