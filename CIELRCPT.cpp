#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int n=12;
	    int price[n];
	    price[0]=1;
	    for(int i=1;i<n;i++){
	        price[i]=price[i-1]*2;
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(p>=price[n-i-1]){
	        ans+=p/price[n-1-i];
	        p-=p/price[n-1-i]*price[n-1-i];
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
