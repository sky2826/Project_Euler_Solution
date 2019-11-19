#include<iostream>
using namespace std;
int main(){
    int arr[100001];
    for(int i=0;i<=100000;i++)
    arr[i]=1;
    arr[1]=0;
    arr[0]=0;
    for(int i=2;i<=50000;i++){
        for(int j=i+i;j<=100000;j+=i){
            arr[j]+=i;
        }
    }
    long long int count=0;
    for(int i=1;i<10000;i++){
    	if(arr[arr[i]]==i and arr[i]!=i){
    	count+=i;
    }
	}
	cout<<count;
    return 0;
}
