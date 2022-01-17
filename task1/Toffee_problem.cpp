#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,a;
    cin>>n>>m;
    vector<long long int> g1;
    for(long long int i=0;i<n;i++){
        cin>>a;
        if(a<=m){
            g1.push_back(a);
        }
    }
    long long int count=0;
    if(g1.size()!=0){
        sort(g1.begin(),g1.end());
        long long int sum=0,i=0;
        while(i<g1.size()){
            sum=sum+g1[i];
            if(sum>m){
                break;
            }
            count++;
            i++;
        }
    } 
    cout<<count;
    return 0;
}
