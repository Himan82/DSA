#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&v,int low ,int mid ,int high){
    vector<int>temp(high-low+1);
    int indx=0;
    int i=low,k=mid+1;
    while(i<=mid && k<=high){
        if(v[i]<=v[k]){
            temp[indx]=v[i];
            i++;
        }
        else{
            temp[indx]=v[k];
            k++;
        }
        indx++;
    }
    while(i<=mid){
        temp[indx]=v[i];
        indx++;
        i++;
    }
    while(k<=high){
        temp[indx]=v[k];
        indx++;
        k++;
    }
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}
void MergeSort(vector<int>&v ,int low, int high){
    if(low==high)return ;
    int mid=(low+high)/2;
    MergeSort(v,low,mid);
    MergeSort(v,mid+1,high);
    Merge(v,low,mid,high);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    MergeSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}