#include<bits/stdc++.h>
using namespace std;
bool isvalid(vector<vector<int>>& v,int row,int col){
    for(int r=0;r<row;r++){
        if(v[r][col]==1)return false;
    }
    int ld=min(row-1,col-1);
    for(int i=1;i<=ld;i++){
        if(v[row-i][col-i]==1)return false;
    }
    int c=v.size()-1-col;
    int rd=min(row-1,c);
    for(int i=1;i<=rd;i++){
        if(v[row-i][col+i]==1)return false;
    }
    return true;
}
int Nqueens(int n,int count, vector<vector<int>>& v){
    if(count>n)return 1;
    int ans=0;
    for(int i=1;i<=n;i++){
        v[count][i]=1;
        if(isvalid(v,count,i)){
            ans+=Nqueens(n,count+1,v);
        }
        v[count][i]=0;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    cout<<Nqueens(n,1,v);
    return 0;
}