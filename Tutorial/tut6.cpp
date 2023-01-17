#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=1; i<=10; i++){
        cout<<"The Multiplication Table is:"<<a<<"*"<<i<<(a*i)<<endl;
    }
    return 0;    
}