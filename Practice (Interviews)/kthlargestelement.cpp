#include<bits/stdc++.h>
#include<algorithm>
#include<array>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int size;
        cin>>size;
        int arr[size];
        for (int i=0;i<size;i++){
            cin>>arr[i];
        }
        int k;
        cout<<"Enter the value of k:"<<endl;
        cin>>k;
        int a= sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr + a);
        cout<<arr[k-1]<<endl;
    }
}