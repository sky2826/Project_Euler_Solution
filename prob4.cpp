#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool isPalindrome(int num){
	string s = to_string(num);
	int l=0;
	int r=s.length()-1;
	while(r>l){
		if(s[r] != s[l])
		return false;
		r--;
		l++;
	}
	return true;
}
int main(){
	long long int l=-1;
	for(int i=999;i>=100;i--){
		for(int j=i;j>=100;j--){
				if(isPalindrome(i*j)){
				
					if(l<i*j){
					l=i*j;
				}
				}
		}
	}
	cout<<l;
	return 0;
}
