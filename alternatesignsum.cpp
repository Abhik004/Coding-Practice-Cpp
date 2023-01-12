#include <bits/stdc++.h>
using namespace std;
int go(int n  , int i){
    if(i == n + 1)return 0;
    if(i%2 == 0)return go(n , i + 1) - i;
    else return go(n , i + 1) + i;
}
int main() {
    int n;
    cin>>n;
    cout<<go(n,1);
}