#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int *ptr = NULL;
    int *p1= 0;
    int *p2= "/0"; //error this line not running

    cout << ptr<<" "<<p1<<" "<<p2<<endl;;
    return 0; 
}
//segentation fault may happen during deferencing in this case RUNTIME ERROR