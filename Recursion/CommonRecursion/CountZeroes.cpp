#include<bits/stdc++.h>
using namespace std;
int CountZeroes(int n){
    if(n==0)return 0;
    int sum=0;
    if(n%10==0)sum=1;
    return CountZeroes(n/10)+sum;
}
int main(){
    int n;
    cin>>n;
    cout<<CountZeroes(n);
    return 0;
}