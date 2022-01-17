#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int n){
    if(n%2==0){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x;
    cin>>n>>x;
    int arr[n+1];
    vector<int> g1;
    for(int i=3;i<n+1;i++){
        if(prime(i)){
            arr[i]=1;
            g1.push_back(i);
        }
        
    }
    int count=0,flag=0;
    if(x==0){
        cout<<"YES";
    }
    else{
    for(long unsigned int i=0;i<g1.size()-1;i++){
        
        int t=g1[i]+g1[i+1]+1;
        if(t<=n && arr[t]==1){
            count++;
        }
        
        if(count>=x){
            cout<<"YES";
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        cout<<"NO";
    }}
    return 0;
}
