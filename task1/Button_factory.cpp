#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    //case 1
    if(r>=p && r<q && s>q)
        cout<<q-r;
    else if(p>r && p<s && q>s)
        cout<<s-p;
    else if(r>=p && s<=q)
        cout<<s-r;
    else if(p>=r && q<=s)
        cout<<q-p;
    else
        cout<<0;
    return 0;
}
