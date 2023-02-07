// Given an integer array A of size N, he needs u to answer t queries for him. 
// In each query, he gives u 2 integers P and Q. In response to each of these 
// quesries, you need to tell him the count of numbers in array A, that are either
// divisible by P, Q , or both

// approach
// 2  3 5 7 4 9 20
// divible by 4,5 or both
// 4-->2 x
// 5-->2 y
// both --> z
// ans --> x+y-z

// logic ct[i] = multiples of i in array
// P , Q ---> ct[P], ct[Q]

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

int hsh[N];
int multiples_ct[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hsh[x]++;
    }
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            multiples_ct[i] += hsh[j];
        }
    }
    int q;
    cin>>q;
    while (q--)
    {
        int p,q;
        cin>>p>>q;
        long long lcm = p*1LL*q / __gcd(p,q);
        long ans = multiples_ct[p] + multiples_ct[q];

        if(lcm < N) ans-=multiples_ct[lcm];
        cout<<ans<<endl;
    }
    
}
// 6
// 2 3 5 7 4 9
// 2
// 4 5 ----> ans 2
// 3 7----> ams 3