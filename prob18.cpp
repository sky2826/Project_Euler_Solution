#include<fstream>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int> *arr,int r,int c,int store[][20]){
    if(r>=15)
    return 0;
    if(store[r][c]!=-1)
    return store[r][c];
    store[r][c]=arr[r][c]+max(find(arr,r+1,c,store),find(arr,r+1,c+1,store));
    return store[r][c];
}
int main(){
    ifstream inf("prob18_data.txt");
    vector<int> arr[15];
    for(int i=1;i<=15;i++){
        for(int j=0;j<i;j++){
            int temp;
            inf>>temp;
            arr[i-1].push_back(temp);
 
        }

     
    }
        int store[20][20];
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++)
            store[i][j]=-1;
        }
        cout<<find(arr,0,0,store);
}