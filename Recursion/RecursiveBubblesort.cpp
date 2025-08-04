#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>& v,int r,int c){
    if(r==v.size()-1)return;
    if(c==v.size()-1)return BubbleSort(v,r+1,0);
    if(v[c]>v[c+1])swap(v[c],v[c+1]);
    return BubbleSort(v,r,c+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int r=0,c=0;
    BubbleSort(v,r,c);
    for(int i=0;i<n;i++){
        cout<<v[i]<< " ";
    }
    return 0;
}