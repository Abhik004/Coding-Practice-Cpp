     
#include<iostream>
using namespace std;
 //Recursive Function
  int func(int a, int b){
 
  if(b==0) //Base Condition
    return 1;
  if(b%2==0){
      int result = func(a,b/2);
      return result*result;
  }
  else{
      int result = func(a,(b-1)/2);
      return a*result*result; 
  }
 
 }
//Driver Code
  int main(){
  int a= 5, b = 3;
  cout<<"Required Power is "<<func(a, b)<<endl;
}