#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v(6);
    for (int i=0; i<6; i++){
        cin>>v[i];
    }
    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurence=0;
    for (int ele:v){
        if (ele==x){
            occurence+=1;
        }
    }
    cout<<occurence<<endl;
}