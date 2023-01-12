     
#include <bits/stdc++.h>
using namespace std;
 
 
int func(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + func(n / 10));
}
 
// Driven code
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = func(n);
    cout << "Sum of digits in "<< n
       <<" is "<<ans<< endl;
    return 0;
}