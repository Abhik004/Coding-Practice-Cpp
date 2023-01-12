#include <bits/stdc++.h>
using namespace std;
void go(int i,int n){
    if(i == n+1)return;
    cout<<i<<" ";
    go(i+1 , n);
}
int main() {
    int n;
    cin>>n;
    go(1,n);
}
