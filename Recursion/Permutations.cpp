#include<bits/stdc++.h>
using namespace std;
void Permutations(string & s, vector<string> & v,int count,string & t){
    if(count==s.size()){
        v.push_back(t);
        return ;
    }
    if(t.size()==0){
        t.push_back(s[count]);
        Permutations(s,v,count+1,t);
    }
    else{
        char c=s[count];
        string curr=t;
        for(int i=0;i<=curr.size();i++){
            t=curr;
            t.insert(i,1,c);
            Permutations(s,v,count+1,t);
        }
    }
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>v;
    string t;
    Permutations(s,v,0,t);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}