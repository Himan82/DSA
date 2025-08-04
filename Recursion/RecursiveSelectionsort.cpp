#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>& v,int row,int col,int maxi){
    if(row==v.size()-1)return;
    if(col==v.size()-row-1){
        if(v[col]>v[maxi])return SelectionSort(v,row+1,0,0);
        swap(v[col],v[maxi]);
        return SelectionSort(v,row+1,0,0);
    }
    if(v[col]>v[maxi])return SelectionSort(v,row,col+1,col);
    return SelectionSort(v,row,col+1,maxi);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int maxi=0;
    int col=0;
    int row=0;
    SelectionSort(v,row,col,maxi);
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}