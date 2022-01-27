#include <iostream>
#include<vector>
using namespace std;
void print(const vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void printkpath(vector<int>& arr,vector<int>& path,int k,int index,int size){
    if(arr[index]==-1 || index>=size){
        return;
    }
    
    path.push_back(arr[index]);
    printkpath(arr,path,k,2*index+1,size);
    printkpath(arr,path,k,2*index+2,size);
    
    int f=0;
    for(int j=path.size()-1;j>=0;j--){
        f +=path[j];
    }
    if(f==k && (2*index+1>=size || arr[2*index+1]==-1) && (2*index+2>=size || arr[2*index+2]==-1)){
        print(path);
    }
    
    path.pop_back();   
}
int main()
{
    int n,k;
    cin>>n;
    vector<int> g1(10000,-2);
    int count=0,i=0;
    while(count<n){
        if(g1[i]==-2)
            cin>>g1[i];
        if(g1[i]!=-1){
            count++;
        }
        else{
            g1[2*i+1]=-1;
            g1[2*i+2]=-1;
        }
        i++;
    }
    cin>>k;
   vector<int> path;
   printkpath(g1,path,k,0,i);
    return 0;
}
