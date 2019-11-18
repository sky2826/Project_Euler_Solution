#include<iostream>
using namespace std;
int main(){
    int day=2;
    int count=0;
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1901;i<=2000;i++){
        for(int k=0;k<12;k++){
            if(day==0)
            count++;
            day+=arr[k];
            if(k==1 && i%4==0){
                if(i%100==0){
                    if(i%400==0)
                    day++;
                }
                else{
                    day++;
                }
            }
            day=day%7;
            
        }
    }
    cout<<count;
    return 0;
}
