#include<fstream>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int num=-1;
	ifstream in("prob8_string.txt");
	string s;
	in>>s;
	int l=-1;
	int r=-1;
	for(int i=0;i<s.length();i++){
		if(s[i]!='0'){
			if(l==-1){
				l=i;
				r=i;
			}
			else{
				r++;
				if(r-l+1==13){
				long long int temp=1;
				for(int i=l;i<=r;i++)
				temp*=((int)s[i]-48);
				if(num<temp)
				num=temp;
				l++;		
				}
			}
			
		}
		else{
			l=-1;
			r=-1;
		}
	}
	cout<<num;
	return 0;
}
