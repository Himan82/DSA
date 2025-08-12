#include<bits/stdc++.h>
using namespace std;
void Paths(int n,int m,string s){
    if(n==1 && m==1){
        cout<<s<<" ";
        return;
    }
    string t=s;
    string d=s;
    if(n!=1){
        t.push_back('D');
        Paths(n-1,m,t);
    }
    if(m!=1){
        s.push_back('R');
        Paths(n,m-1,s);
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    Paths(n,m,s);
    return 0;
}