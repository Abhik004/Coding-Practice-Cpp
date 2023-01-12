#include <iostream>
using namespace std;
int fibo(int a) {
   if(a<=1) {
      return(a);
   }else {
      return(fibo(a-1)+fibo(a-2));
   }
}
int main() {
   int n;
   cout << "Enter the value of n: ";
   cin >> n;
   cout << fibo(n)<< endl;
 
   return 0;
}