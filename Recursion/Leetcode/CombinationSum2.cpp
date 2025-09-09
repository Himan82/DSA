#include<bits/stdc++.h>
using namespace std;
void CombinationSum(vector<int>&v ,vector<vector<int>>& ans,int indx,int target,vector<int>&temp){
    if(target==0){
        ans.push_back(temp);
        return ;
    }
    if(indx==v.size())return ;
    for(int i= indx;i<v.size();i++){
        if(i!=indx && v[i]==v[i-1])continue;
        if(v[i]>target)break;
        temp.push_back(v[i]);
        CombinationSum(v,ans,i+1,target-v[i],temp);
        temp.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>>ans;
    vector<int>temp;
    int target;
    cin>>target;
    CombinationSum(v,ans,0,target,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}