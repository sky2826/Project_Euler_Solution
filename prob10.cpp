#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int num=3;
	vector<long long int> v;
	long long int sum=2;
	v.push_back(2);
	while(1){
		int i=0;
		bool flag=true;
		while(i<v.size() and v[i]*v[i]<=num){
			if(num%v[i]==0){
				flag=false;
				break;
			}
			i++;
		}
		if(flag){
		if(num>=2000000){
			break;
		}
		sum+=num;
		v.push_back(num);
	}
		num++;
		
	}
	cout<<sum;
	return 0;
}
