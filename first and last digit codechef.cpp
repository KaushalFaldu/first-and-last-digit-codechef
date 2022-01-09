#include <iostream>

using namespace std;

int main() {
	
   int t,first,last,sum,r;
   cin>>t;
   while(t--){
       
       int n;
       cin>>n;
       
    last=n%10;
      
        while(n>0){
            
            r=n%10;
            n=n/10;
        }
        first=r;
            sum=last+first;
            cout<<sum<<endl;
   }
	
	return 0;
}
