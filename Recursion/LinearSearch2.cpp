#include<bits/stdc++.h>
using namespace std;
vector<int> merge(const vector<int>& v1, const vector<int>& v2) {
    vector<int> result;
    result.reserve(v1.size() + v2.size()); 
    result.insert(result.end(), v1.begin(), v1.end());
    result.insert(result.end(), v2.begin(), v2.end());
    return result;
}
vector<int> Linear_Search(vector<int> &v,int target, int indx){
    vector<int>res;
    if(indx==v.size())return res;
    if(v[indx]==target)res.push_back(indx); 
    vector<int>prev= Linear_Search(v,target,indx+1);
   return  merge(prev,res);
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
   res=Linear_Search(v,target,indx);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}