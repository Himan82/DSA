#include<bits/stdc++.h>
using namespace std;
void ReverseNumber(int n,int &num){
    if(n==0)return ;
    num=num*10+n%10;
    ReverseNumber(n/10,num);

}
int main(){
    int n;
    cin>>n;
    static int num=0;
    ReverseNumber(n,num);
    cout<<num<<endl;
    return 0;
}