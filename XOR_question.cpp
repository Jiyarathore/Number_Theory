//Given array a of n integers, All integers are present
//in even count except one, Find that 1 integer which has odd count 
//in O(n) time complexity ans O(1) space;
// N< 10^5
// a[i]<10^5

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans^=x;

    }
    cout<<ans<<endl;
}
// c^a^b^c^b--> c^a^c^b^b --> c^a^c --> c^c^a --> 0^a -->a

// 9
// 2 4 6 7 7 4 2 2 2
// 6