#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> um;
    vector<int> v;
    int arr[28124];
    for(int i=0;i<=28124;i++)
    arr[i]=1;
    arr[1]=0;
    arr[0]=0;
    for(int i=2;i<=14062;i++){
        for(int j=i+i;j<=28124;j+=i){
            arr[j]+=i;
        }
    }

    for(int i=1;i<=28124;i++){
        if(arr[i]>i)
        v.push_back(i);
    }
    for(int j=0;j<v.size();j++)
    for(int k=0;k<v.size();k++){
        um[v[j]+v[k]]=1;
    }

    int c=0;
    int l=0;
    for(int i=1;i<28124;i++){
        if(!um[i]){
            c+=i;
        }
    }
    cout<<c<<"\n";
    return 0;
}
