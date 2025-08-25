#include<bits/stdc++.h>
using namespace std;
int SumofDigits(int n){
    if(n==0)return 0;
    return SumofDigits(n/10)+n%10;
}
int main(){
    int n; 
    cin>>n;
    cout<<SumofDigits(n)<<endl;
    return 0;
}