#include<bits/stdc++.h>
using namespace std;
int CountPaths(int row,int column){
    if(row==1 || column==1)return 1;
    return CountPaths(row-1,column)+CountPaths(row,column-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<CountPaths(n,m);
    return 0;
}