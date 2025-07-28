#include<bits/stdc++.h>
using namespace std;
int BinarySearch(const vector<int>& v,int l,int r,int target){
    if(l>r)return -1;
    int mid=(l+r)/2;
    if(v[mid]==target)return mid;
    else if(v[mid]<target)return BinarySearch(v,mid+1,r,target);
    else return BinarySearch(v,l,mid-1,target); 
}
int main(){
    int n; //size of array
    cin>>n;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end()); // Ensure the array is sorted for binary search
    int target; //elemet to search for in the array
    cin>>target;
    int l=0;
    int r=n-1;
    cout<<BinarySearch(v,l,r,target)<<endl;
    
    return 0;
}