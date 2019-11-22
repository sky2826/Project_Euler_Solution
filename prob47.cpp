#include<iostream>
using namespace std;
int main(){
    int arr[1000001];
    for(int i=0;i<1000001;i++)
    arr[i]=0;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=500000;i++){
        if(!arr[i]){
            for(int j=i+i;j<=1000000;j+=i)
            arr[j]+=1;
        }
    }
    
    for(int i=2;i<=1000000-3;i++){
        if(arr[i]==4 and arr[i+1]==4 and arr[i+2]==4 and arr[i+3]==4){
            cout<<i;
            break;
        }
    }

    return 0;
}