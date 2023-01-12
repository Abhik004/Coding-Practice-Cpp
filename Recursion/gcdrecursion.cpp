#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);  
}
 
int main(){
    int a = 40, b = 48;
    cout<<"GCD("<<a<<", "<<b<<") = "<<gcd(a, b);
    return 0;
}