#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long int ll;
ll powmod(ll n,ll mod){
    ll res;
    if(n==0)
      res=1;
    else if(n==1)
      res=2;
    else
    {
        res=powmod(n/2,mod);
        res=res*res%mod;
        if(n%2)
          res=res*2%mod;
    }
    
    return res;
}
int main()
{
    ll mod=1000000007;
    ll n;
    cin>>n;
    if(n>0){
    ll num1=powmod(n-1,mod);
    ll num2=(num1*2+1)%mod;
    ll num3=(num1*num2)%mod;
    
    cout<<num3;
    }
    else{
        cout<<"1";
    }

    return 0;
}

