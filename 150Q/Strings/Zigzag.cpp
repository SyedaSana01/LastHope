#include<bits/stdc++.h>
using namespace std;
string Zigzag(string s,int numRows){
    int n=s.length();
    string res="";
    for(int row=0;row<n;row++){
        int i=row;
        int up=true;
        while(i<n){
        if(row==0 || row==n-1){
            i+=2*numRows-2;

        }else {
            if(up){
                i+=(2*(numRows-2)-2);
            }else{
                i+=2*numRows;
            }
           up=!up;
        }
    }


    }
    return res;

}
