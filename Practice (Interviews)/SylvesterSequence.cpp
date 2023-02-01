// an integer sequence in which each member of the sequence is the product of the previous members, plus one//
#include <bits/stdc++.h>
using namespace std;
#define N 1000000007 //Since numbers can be very big, use %10^9 + 7
 
void printSequence(int n){
    int a = 1; 
    int ans = 2; 
    for (int i = 1; i <= n; i++) {
        cout << ans << " ";
        ans = ((a % N) * (ans % N)) % N;
        a = ans;
        ans = (ans + 1) % N;
    }
}
// Driven Program
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    printSequence(n);
    return 0;
}