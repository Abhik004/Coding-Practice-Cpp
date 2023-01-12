#include <bits/stdc++.h>
using namespace std;
void go(int n,int k , int i){
    if(k == 0)return;
    cout<<n*i<<" ";
    go(n , k - 1 , i + 1);
}
int main() {
    int n,k;
    cin>>n>>k;
    go(n,k,1);
}