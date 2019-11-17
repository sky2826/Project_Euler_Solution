#include<iostream>
using namespace std;
int main(){
	long int a=1;
	long int b=2;
	long long int l=0;
	while(b<=4000000){
		long long int temp = a+b;
		if(b%2==0)
		l+=b;
		a=b;
		b=temp;
	}
	cout<<l;
	return 0;
}
