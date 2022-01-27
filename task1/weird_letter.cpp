#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string match(string s,string p){
    long long int j=0,n=s.size(),m=p.size();
    if(n>m){
        return "NO";
    }
    for(long long int i=0;i<m;i++){
        if(p[i]==s[j]){
            j++;
        }
        else if(p[i-1]!=p[i]){
            return "NO";
        }
    }
    if(j==n)
        return "YES";
    else 
        return "NO";
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int t;
    cin>>t;
    string s,p;
    while(t--){
        cin>>s>>p;
        cout<<match(s,p)<<endl;
    }
    return 0;
}
