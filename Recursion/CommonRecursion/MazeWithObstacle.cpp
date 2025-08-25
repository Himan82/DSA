#include<bits/stdc++.h>
using namespace std;
int Paths(int n,int m,const vector<vector<int>>&v,int i,int j){
    if(v[i][j]==0)return 0;
    if(i==n || j==m)return 1;
    return Paths(n,m,v,i+1,j)+Paths(n,m,v,i,j+1);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j]; 
        }
    }
   cout<<Paths(n,m,v,1,1);
    return 0;
}