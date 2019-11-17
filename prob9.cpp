#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=998;i++){
		for(int j=i+1;j<=998;j++){
			for(int k=j+1;k<=998;k++){
				if(i+j+k==1000 and ((k*k)==(i*i)+(j*j))){
					cout<<i*j*k;
					return 0;
				}
			}
		}
	}
	return 0;
}
