#include<bits/stdc++.h>
using namespace std;
 
  //Recursive Function
  int func(int a, int b){
 
  if(b==0) //Base Condition
    return 1;
 
  return (a*func(a, b-1));
 }
//Driver Code
  int main(){
  int a = 5, b = 3;
  cout<<"Required Power is "<<func(a, b)<<endl;
}