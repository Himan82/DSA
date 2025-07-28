#include<bits/stdc++.h>
using namespace std;
void ReverseCount(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<" ";
    ReverseCount(n-1); // Recursive call with decremented value
}
int main(){
    int n;
    cin >> n; 
    ReverseCount(n); 
    return 0;
}