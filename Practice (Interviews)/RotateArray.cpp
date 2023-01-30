#include<bits/stdc++.h>
#include<array>


using namespace std;

void rotate(int arr[], int a)
{
    int x = arr[a - 1], i;
    for (i = a - 1; i > 0; i--){
        arr[i] = arr[i - 1]; 
    }
    arr[0] = x;
}
int main(){
    int m;
    cout<<"Length of array: ";
    cin>>m;
    int arr[m]; 
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int a=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,a);
    for(int j=0;j<a;j++){
        cout<<arr[j];
    }
    cout<<endl;
    return 0;
}