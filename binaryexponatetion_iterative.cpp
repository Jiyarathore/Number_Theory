#include<bits/stdc++.h>
using namespace std;
int binExpIter(int a, int b){
    int ans=1;
    while(b){
        if(b&1){//set bit
            ans=ans*a;
        }
        a=a*a;
        b>>=1;//left shift to check whether bit is 1

    }
    return ans;
}
int main(){
    int a=2,b=13;
    cout<<binExpIter(a,b);//8192
    pow(a,b);//8192
}

//3^13 --> 3^(1101)