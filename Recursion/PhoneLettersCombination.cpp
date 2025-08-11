#include<bits/stdc++.h>
using namespace std;
 void helper(string & digits,vector<string>&v ,int indx,vector<string>& hash,string & t){
        if(indx==digits.size()){
            v.push_back(t);
            return ;
        }
        int len=(hash[digits[indx]-'0']).size();
        for(int i=0;i<len;i++){
            t.push_back(hash[digits[indx]-'0'][i]);
            helper(digits,v,indx+1,hash,t);
            t.pop_back();
        }


    }
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        string t;
        vector<string>hash(10);
        hash[2]="abc";
        hash[3]="def";
        hash[4]="ghi";
        hash[5]="jkl";
        hash[6]="mno";
        hash[7]="pqrs";
        hash[8]="tuv";
        hash[9]="wxyz";
        helper(digits,v,0,hash,t); 
        return v;
    }
int main(){
    string digits;
    cin>>digits;
    vector<string>ans;
    ans=letterCombinations(digits);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}