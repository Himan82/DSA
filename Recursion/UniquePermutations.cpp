#include<bits/stdc++.h>
using namespace std;
void UniquePermutations(string & s,vector<string> &v,int pos){
    if(pos==s.size()){
        v.push_back(s);
        return ;
    }
    unordered_set<char>used;
    for(int i=pos;i<s.size();i++){
        if(used.count(s[i]))continue;
        used.insert(s[i]);
        swap(s[i],s[pos]);
        UniquePermutations(s,v,pos+1);
        swap(s[i],s[pos]);
    }
}
int main(){
    string s;
    cin>>s;
    vector<string>v;
    UniquePermutations(s,v,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}