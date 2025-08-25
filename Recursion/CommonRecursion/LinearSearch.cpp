#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>v ,int target,int indx){
    if(indx==v.size())return -1;
    if(v[indx]==target)return indx;
    return LinearSearch(v,target,indx+1);
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
    int indx=0;
   cout<< LinearSearch(v,target,indx);
    return 0;
}