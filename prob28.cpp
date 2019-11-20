#include<iostream>
using namespace std;
int main(){
    long long int l=1;
    for(int j=3;j<=1001;j+=2){
        long long int k=j*j;
        l+=4*k-((j-1)*6);
    }
    cout<<l<<"\n";
    return 0;
}
