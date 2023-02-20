//P(n)=P(n-2)+P(n-3)
//P(0)=P(1)=P(2)=1
#include<iostream>
using namespace std;
int pad(int n){
    int pPrevPrev = 1, pPrev = 1, pCurr = 1, pNext = 1;
    for (int i=3; i<=n; i++)
    {
        pNext = pPrevPrev + pPrev;
        pPrevPrev = pPrev;
        pPrev = pCurr;
        pCurr = pNext;
    }
    return pNext;
}
// Driver Program //
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout << pad(n);
    return 0;
}