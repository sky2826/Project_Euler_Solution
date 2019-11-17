#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int check_prime(long long int num){
    for(long long int i=2;i*i<=num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main(){
	long long int num=600851475143;
	long long int r=-1;
	long long int l=-1;
	for(long long int j=2;j*j<=num;j++){
	    if(num%j==0){
	        if(check_prime(j)){
	            if(j>l)
	            l=j;
	        }
	        if(check_prime(num/j)){
	            if(num/j>r){
	                r=num/j;
	                break;
	            }
	        }
	    }
	}
	if(r!=-1)
	cout<<r<<"\n";
	else if(l!=-1)
	cout<<l<<"\n";
	else
	cout<<num<<"\n";
	return 0;
}
