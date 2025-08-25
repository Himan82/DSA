#include<bits/stdc++.h>
using namespace std;
void Subsets(string &s,vector<string>& v,int indx,string &t){
    if(indx==s.size()){
        v.push_back(t);
        return ;
    }
    t.push_back(s[indx]);
    Subsets(s,v,indx+1,t);
    t.pop_back();
    Subsets(s,v,indx+1,t);
}
int main(){
    string s;
    cin>>s;
    string t;
    vector<string>ans;
    Subsets(s,ans,0,t);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}