#include<bits/stdc++.h>
using namespace std;
bool Sorted(vector<int> v,int i,int s){
    if(i==s)return true;
    if(i==0)return Sorted(v,i+1,s);
    else if(v[i]>=v[i-1])return  Sorted(v,i+1,s);
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int i=0;
    int size=v.size();
    cout<<Sorted(v,i,size);
    return 0;
}