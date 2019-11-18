#include<iostream>
using namespace std;
string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string tens[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string hundreds[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int charCount(string s){
    int len=0;
    for(int i=0;i<s.size();i++)
    if(s[i]!=' ')
    len++;
    return len;
}
string numberToWord(int n){
	string s="";
            if(n and n/1000){
            s+=ones[n/1000]+" thousand ";
            n=n%1000;
        }
        if(n and n/100){
            s+=ones[n/100]+" hundred ";
            n=n%100;
            if(n){
                s+="and ";
            }
        }
        if(n and n>=20){
            s+=hundreds[(n/10)-2]+" ";
            n=n%10;
        }
        if(n and (n>=10 and n<20)){
            s+=tens[n-10]+" ";
            n=0;
        }
        if(n){
            s+=ones[n];
            n=0;
        }
        return s;
    }
int main() {
long long int c=0;
for(int i=1;i<=1000;i++){
    c+=charCount(numberToWord(i));
}
cout<<c;
return 0;
}
