#include<bits/stdc++.h>
using namespace std;
string Merge(string w1,string w2){
    string result="";
    int i=0,j=0;
    while(i<w1.size() || j<w2.size()){
        if(i<w1.size()){
            result.push_back(w1[i++]);
        }
        if(j<w2.size()){
            result.push_back(w2[j++]);
        }

    }
    return result;
}