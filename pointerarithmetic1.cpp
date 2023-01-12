#include<iostream>
using namespace std;

int main(){
    int x=20;
    int *ptr=&x;
    double dec=9.8;
    double *ptrd=&dec;
    cout<<ptr<<" "<<(ptr + 1)<<endl;
    cout<<ptrd<<" "<<(ptrd + 2)<<" "<<(ptrd + 3)<<" "<<(ptrd - 1);
    return 0;
}