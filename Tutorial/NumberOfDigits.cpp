#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int digits=0;
    while (t>0){
        digits++;
        t=t/10;
    }
    cout<<"No. of digits: "<<digits<<endl;

    return 0;
}