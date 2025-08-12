#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
void helper(const int n, int k, const int target,int &sum ,long long & count,int indx){
    if(sum>target)return ;
        if(indx>n){
            if (sum==target)count=(count+1)%m;
            return ;
        }
        for(int i=1;i<=k;i++){
            sum+=i;
            helper(n,k,target,sum,count,indx+1);
            sum-=i;
        }
    }
 int numRollsToTarget(int n, int k, int target) {
       long long count=0;
       int sum=0;
       int indx=1;
        helper(n,k,target,sum,count,indx); 
        return count;
    }
int main(){
    int n,k,target;
    cin>>n>>k>>target;
   cout<< numRollsToTarget(n,k,target);
    return 0;
}