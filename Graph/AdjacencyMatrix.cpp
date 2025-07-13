#include<bits/stdc++.h>
using namespace std;
void adjGraph(vector<vector<int>>g){
    for(int i=1;i<=4;i++){
        cout<<"The node "<<i<<" is connected to node : ";
        for(int j=1;j<=4;j++){
            if(g[i][j]==1){
                cout<<j<<" ";
            }
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
    int n=5;
    vector<vector<int>>adjMatrix(n,vector<int>(n,0));
    //marking the adjacency matrix for given edges in the undirected graph
    for(int i=0;i<v.size();i++){
        int a=v[i].first;
        int b=v[i].second;
        adjMatrix[a][b]=1;
        adjMatrix[b][a]=1;
    }
    cout<<"The graph Created: "<<endl;
    adjGraph(adjMatrix); //function to print the graphg
    return 0;
}