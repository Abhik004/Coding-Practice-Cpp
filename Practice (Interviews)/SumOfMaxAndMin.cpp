#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m;
        cin>>m;
        int array [m];
        for(int j=0; j<m; j++){
            cin>>array[j];
        }
        int max=array[0];
        for(int k=0; k<m; k++){
            if (array[k]>max){
                max=array[k];
            }
        }
        int min=array[m];
        for(int l=m; l>=0; l--){
            if (array[l]<min){
                min=array[l];
            }
        }
        cout<<max+min<<endl;

    }
}