//Series is 1^2 + 3^2 + 5^2 + 7^2 + . . . + (2*n – 1)^2
#include <bits/stdc++.h>
using namespace std;
int sumOfSeries(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + (2 * i - 1) * (2 * i - 1);
    return sum;
}
// Driver code
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout << sumOfSeries(n);
    return 0;
}
