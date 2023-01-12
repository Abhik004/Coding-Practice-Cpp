#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<n-i; j++){
            cout<<" ";
        }
        int k=i;
        for (int j=1; j<=n; j++){
            cout<<k--<<endl;
        }
        cout<<endl;
    }
}