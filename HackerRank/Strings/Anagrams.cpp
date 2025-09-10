#include<bits/stdc++.h>
using namespace std;


int makeAnagram(string a, string b) {
    int freq1[26]={0};
    int freq2[26]={0};
    for(int c:a){
        freq1[c-'a']++;
    }
    
    for(int c: b){
        freq2[c-'a']++;
    }
    
    int del=0;
    for(int i=0;i<26;i++){
        del+=abs(freq1[i]-freq2[i]);
    }
    return del;
        
    }
