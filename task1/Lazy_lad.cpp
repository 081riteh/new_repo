#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,q;
    cin>>q;
    while(q--){
        cin>>n;
        long long int g=floor((sqrt(1+8*n)-1)/2);
        cout<<g<<endl;
    }
    return 0;
}
