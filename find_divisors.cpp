#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;   
            c+=1;
            sum+=i;
            if(n/i !=i){
                sum+=n/i;
                c+=1;
            }     
            }
    }
    cout<<c<<" "<<sum<<endl;
}
// 36
//divisors time complexity O(sqrt(N))
// 1 36
// 2 18
// 3 12
// 4 9
// 6 6

// 9 91