//n-th term in series 2, 12, 36, 80, 150….
// series is sum of squares and cubes of natural numbers (1, 4, 9, 16, 25, …..) + (1, 8, 27, 64, 125, ….)
#include <iostream>
using namespace std;
int nthTerm(int n){
    return (n * n) + (n * n * n);
} 
// driver code
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout << nthTerm(n);
    return 0;
}