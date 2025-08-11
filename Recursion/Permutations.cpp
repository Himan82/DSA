#include<bits/stdc++.h>
using namespace std;
void Permutations(string & s, vector<string> & v,int pos){
    if(pos==s.size()){
        v.push_back(s);
        return ;
    }
    for(int i=pos;i<s.size();i++){
        swap(s[pos],s[i]);
        Permutations(s,v,pos+1);
        swap(s[pos],s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>v;
    Permutations(s,v,0);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}