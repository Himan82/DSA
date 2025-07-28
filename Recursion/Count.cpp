#include<bits/stdc++.h>
using namespace std;
void Count(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    Count(n-1); 
    cout<<n<<" ";
}
int main(){
    int n;
    cin >> n; 
    Count(n);
    return 0;
}