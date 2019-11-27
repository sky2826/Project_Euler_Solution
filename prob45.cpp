#include<iostream>
#include<cmath>
using namespace std;
bool isPantegonal(long long int i){
    double num = (1 + sqrt(1+12*(i*2)))/6;
    if((double)ceil(num)>num)
    return false;
    cout<<num<<"\n";
    return true;

}
int main(){
    long long int n=144;
    while(true){
        if(isPantegonal(n*(2*n-1))){
            cout<<n*(2*n-1);
            break;
        }
        n++;
    }
    return 0;
}