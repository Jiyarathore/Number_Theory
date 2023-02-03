#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(12,4)<<endl; //4
    cout<<gcd(18,12)<<endl;//6
    //lcm
    cout<< 12*18/gcd(12,18)<<endl;//36
    }