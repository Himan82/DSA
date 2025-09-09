#include<bits/stdc++.h>
using namespace std;
void reverse(int low, int high, vector<int> & v){
    if(low==high)return ;
    swap(v[low],v[high]);
    reverse(low+1,high-1,v);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(0,n-1,v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}