#include <bits/stdc++.h>
using namespace std;
 
void printJuggler(long long n){
    long long a = n;
    cout << a << " ";
    while (a != 1){
        long long b = 0;
        if (a % 2 == 0)
            b = floor(sqrt(a));
        else
            b = floor(sqrt(a) *
                      sqrt(a) * sqrt(a));
        cout << b << " ";
        a = b;
    }
}
// Driver Code
int main(){
    long long b;
    cout<<"Enter the number :"<<endl;;
    cin>>b;
    printJuggler(b);
    cout<<endl;
    return 0;
}
