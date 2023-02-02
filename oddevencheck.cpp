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
    for(int i=0;i<8;i++){
        printBinary(i);
        // odd ki last bit 1 hoti h tho uska agar 1 se and krenge tho 1 hi aayega so its odd and for even 1 and 0 is 0 so even
        if(i&1){
            cout<<"odd\n";
        }
        else{
            cout<<"even\n";

        }
    }
}
// 00000000000
// even
// 00000000001
// odd
// 00000000010
// even
// 00000000011
// odd
// 00000000100
// even
// 00000000101
// odd
// 00000000110
// even
// 00000000111
// odd