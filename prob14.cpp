#include<bits/stdc++.h>
using namespace std;
int find(long long int *um,int n){
	if(n==1)
	return 1;
	else{
	    if(n%2==0){
	        if(!um[n/2])
	        um[n/2]=find(um,n/2);
	        um[n]=1+um[n/2];
	    }
	    else{
	        if(!um[(3*n)+1])
	        um[(3*n)+1]=find(um,3*n+1);
	        um[n]=1+um[(3*n)+1];
	    }
	}
	return um[n];
}
int main(){
    long long int arr[1000001],l=0,t;
    memset(arr,0,sizeof(arr));
	for(int i=2;i<=1000000;i++){
		if(!arr[i])
		find(arr,i);
		if(l<arr[i]){
			l=arr[i];
			t=i;
		}
	}
	cout<<t;
}
