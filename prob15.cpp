#include<iostream>
using namespace std;
bool isvalid(int i,int j){
	return (i>=0 and i<21 and j>=0 and j<21);
}
long long int totpath(long long int arr[][22],int i,int j){
	if(i==20 and j==20)
	return 1;
	if(!isvalid(i,j))
	return 0;
	if(arr[i][j])
	return arr[i][j];
	arr[i][j]+=totpath(arr,i,j+1);
	arr[i][j]+=totpath(arr,i+1,j);
	return arr[i][j];
}
int main(){
	long long int arr[22][22];
	for(int i=0;i<=21;i++)
	for(int j=0;j<=21;j++)
	arr[i][j]=0;
	cout<<totpath(arr,0,0);
}
