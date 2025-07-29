#include<bits/stdc++.h>
using namespace std;
void ReverseNumber(int n,int &num){
    if(n==0)return ;
    num=num*10+n%10;
    ReverseNumber(n/10,num);

}
bool Pallindrome(int n,int num){
    if(n==0)return true;
    if(n%10!=num%10)return false;
    return Pallindrome(n/10,num/10);
}
int main(){
    int n;
    cin>>n;
    int num=0;
    ReverseNumber(n,num);
    cout<<Pallindrome(n,num);
    return 0;
}