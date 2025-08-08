#include<bits/stdc++.h>
using namespace std;
int Pivot(vector<int> &v,int low,int high){
    int pivot=v[low];
    int i=low,j=high;
    while(i<j){
        while(v[i]<=pivot && i<=high-1)i++;
        while(v[j]>pivot && j>=low+1)j--;
        if(i<j)swap(v[i],v[j]);
    }
    swap(v[low],v[j]);
    return j;
}
void QuickSort(vector<int>& v,int low, int high){
    if(low<high){
        int pindex=Pivot(v,low,high);
        QuickSort(v,low,pindex-1);
        QuickSort(v,pindex+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    QuickSort(v,0,n-1);
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}