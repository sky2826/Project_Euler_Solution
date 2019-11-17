#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[1000001];
	arr[1]=1;
	for(int i=2;i<1000001;i++)
	arr[i]=2;
	for(int i=2;i<=1000001/2;i++){
		for(int j=i+i;j<1000001;j+=i){
		arr[j]+=1;
	}
	}
	int max=-1;
	for(int i=1;i<1000001;i++){
		if(max<arr[i])
		max=arr[i];
	}
	int n=1;
	while(n<100000){
		int k=n;
		int m=(n+1);
		if(k%2)
		m/=2;
		else
		k/=2;
		if(arr[k]*arr[m]>500){
			cout<<k*m;
			return 0;
		}
		n++;
	}
	cout<<"not founds";
	return 0;
}
