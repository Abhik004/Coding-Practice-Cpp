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

    int count=0;
    for (int i=0; i<v.size(); i++){
        if (v[i]>x){
            count+=1;
        }
    }
    cout<<count<<endl;
}