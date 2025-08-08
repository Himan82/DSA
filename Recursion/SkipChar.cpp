#include<bits/stdc++.h>
using namespace std;
string RemoveChar(string &s, char c , int indx){
    if(indx==s.size())return "";
    if(s[indx]==c)return RemoveChar(s,c,indx+1);
    return s[indx]+RemoveChar(s,c,indx+1);
}
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int indx=0;
    string t=RemoveChar(s,c,indx);
    cout<<t<<endl;
    return 0;
}