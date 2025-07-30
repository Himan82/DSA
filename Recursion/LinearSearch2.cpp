#include<bits/stdc++.h>
using namespace std;
void Linear_Search(vector<int> &v,int target, int indx,vector<int>  &res){
    if(indx==v.size())return;
    if(v[indx]==target)res.push_back(indx);
    Linear_Search(v,target,indx+1,res);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    vector<int>res;
    int indx=0;
    Linear_Search(v,target,indx,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}