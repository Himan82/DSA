#include<bits/stdc++.h>
using namespace std;
void adjlistgraph(unordered_map<int,vector<int>>g){
    for(auto it=g.begin();it!=g.end();it++){
        cout<<"The node "<<it->first<<" is connected to nodes : ";
        for(auto val : it->second){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
int main(){
     vector<pair<int,int>>v;
    //creating the edge list
    v.push_back(make_pair(1,3));
    v.push_back(make_pair(1,4));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(4,3));
    v.push_back(make_pair(2,4));
    unordered_map<int,vector<int>>adjlist;
    for(int i=0;i<v.size();i++){
        int a=v[i].first;
        int b=v[i].second;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    adjlistgraph(adjlist);
    return 0;
}