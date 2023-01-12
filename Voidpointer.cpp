//These are special types of pointers that can point to an object of any type.
//Void Pointers can't be dereferenced
#include <iostream>
using namespace std;

int main(){
    float f= 10.2;
    int x=10;
    void *ptr = &f;
    ptr=&x;

    int *integerPointer = (int *)ptr;

    cout<<*integerPointer<<endl;
    
}