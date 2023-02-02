//Find the sum of the following sequence : 2, 22, 222, ……… to n terms. 
//Geometric Progression : 2/81[{10 * (10^n-1)}-9n]
#include <bits/stdc++.h>
using namespace std;
float sumOfSeries(int n){
    return 0.02469 * (10*(pow(10, n) - 1)- (9 * n));
}
 // driver code
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout << sumOfSeries(n);
    return 0;
}