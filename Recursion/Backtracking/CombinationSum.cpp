#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void combinations(vector<int>&temp,vector<vector<int>>& res,int indx,int sum,int target){
    if(indx>=v.size()){
        if(sum==target){
            res.push_back(temp);
        }
        return ;
    }
    if(sum>target)return ;
    sum+=v[indx];
    temp.push_back(v[indx]);
    combinations(temp,res,indx,sum,target);
    temp.pop_back();
    sum-=v[indx];
    combinations(temp,res,indx+1,sum,target);
}
int main(){
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    vector<int>temp;
    vector<vector<int>>result(n);
    combinations(temp,result,0,0,target);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}