/*
P(n) = P(P(n - 1)) + P(n - P(n - 1)) 
P(1) = 1 and P(2) = 1
*/
#include <bits/stdc++.h>
using namespace std;
int sequence(int n){
    if (n == 1 || n == 2)
        return 1;
    else
        return sequence(sequence(n - 1))
                + sequence(n - sequence(n - 1));
}
 
// Driver Program
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout << sequence(n);
    return 0;
}