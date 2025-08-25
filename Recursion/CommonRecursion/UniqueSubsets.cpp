#include<bits/stdc++.h>
using namespace std;
void UniqueSubsets(int  indx,vector<int> &v ,vector<int> & res){
    if(indx==v.size()){
        for(int i=0;i<res.size();i++){
            cout<<res[i];
        }
        cout<<endl;
        return ;
    }
    res.push_back(v[indx]);
    UniqueSubsets(indx+1,v,res);
    res.pop_back();
    while(indx+1<v.size() && v[indx]==v[indx+1])indx++;
    UniqueSubsets(indx+1,v,res);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int indx=0;
    vector<int>res;
    UniqueSubsets(indx,v,res);
    return 0;
}