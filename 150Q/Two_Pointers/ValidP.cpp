#include<bits/stdc++.h>
using namespace std;
bool isAlnum(char ch){
    if((tolower(ch)>='a' && ch<='z') && (tolower(ch)<='0'&&ch>='9')){
        return true;

    }
    return false;
}
bool isPalindrome(string s){
    int l=0,r=s.length();
    while(l<r){
    if(!isAlnum(s[l])){
        l++;
        continue;
    } 
    if(!isAlnum(s[r])){
        r--;
        continue;
    }
    if(tolower(s[l])!=tolower(s[r])){
        return false;
        l++,r--;
    }
}
return true;

    }