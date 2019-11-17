#include<iostream>
using namespace std;
int main(){
	int arr[21];
	for(int i=0;i<21;i++)
	arr[i]=i;
	for(int i=2;i<=20;i++){
		for(int j=i+1;j<=20;j++){
			if(arr[j]!=1 and !(arr[j]%arr[i]))
			arr[j]/=arr[i];
		}
	}
	int k=1;
	for(int i=1;i<=20;i++){
		k=k*arr[i];
	
	}
	cout<<"\n"<<k;
	return 0;
}
