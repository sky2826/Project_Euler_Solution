#include<iostream>
using namespace std;
int main(){
    int arr[1000001];
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    for(int i=2;i*i<=1000000;i++){
        if(!arr[i]){
            for(int j=i+i;j<=1000000;j+=i){
                arr[j]=1;
            }
        }
    }

    for(int j=35;j<=1000000;j++){
        if(arr[j] and j%2){
        int l=1;
        bool f=true;
        while((2*l*l)<j){
            if(!arr[j-(2*l*l)]){
                f=false;
                break;
            }
            l++;
        }
        if(f){
           cout<<j;
           return 0;
        }
        }
    }
    return 0;
}