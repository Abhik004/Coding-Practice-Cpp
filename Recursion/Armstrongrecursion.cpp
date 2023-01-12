#include <bits/stdc++.h>
using namespace std;
int pow(int a  , int b){
    if(b == 0)return 1;
    if(b%2 == 0)return pow(a , b/2) * pow(a , b/2);
    return a * pow(a  , b/2) * pow(a , b/2);
}
int isArmstrong(int n , int digits){
    if(n == 0)return 0;
    return pow(n%10 , digits) + isArmstrong(n/10 , digits);
}
int main() {
    int n;
    cin>>n;
 
    int digits = 0;
    int temp = n;
 
    while(temp){
        digits++;
        temp/=10;
    }
 
    if(n == isArmstrong(n , digits))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}