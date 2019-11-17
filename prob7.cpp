#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int num=3;
	int l=10001;
	vector<long long int> v;
	v.push_back(2);
	while(v.size()<l){
		int i=0;
		bool flag=true;
		while(i<v.size() and v[i]*v[i]<=num){
			if(num%v[i]==0){
				flag=false;
				break;
			}
			i++;
		}
		if(flag)
		v.push_back(num);
		num++;
		
	}
	cout<<v[l-1];
	return 0;
}
