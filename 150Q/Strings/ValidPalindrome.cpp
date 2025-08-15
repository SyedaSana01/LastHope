#include<bits/stdc++.h>
using namespace std;
bool isAlnum(char ch){
    if((ch >='0'&& ch<='9')||(tolower(ch)>='a'&& tolower(ch)<='z') ){
        return true;

    }
    return false;
    }

bool isPalindrome(string s){
    int st=0,e=s.length()-1;
    while(s[st]<s[e]){
        if(!isAlnum(s[st])){
            st++;continue;
        }
        if(!isAlnum(s[st])){
            e--;
            continue;;

        }
        if(tolower(s[st])!=tolower(s[e])){
           
            return false;

        }
        st++;
        e--;
    }
    return true;
    }

