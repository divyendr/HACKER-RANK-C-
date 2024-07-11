#include <iostream>
using namespace std;

int main() {
    int n,m;
     long int a[100];
    cin>>n;
    int t=0;
   for(int i=0; i<n; i++){
       cin>>a[i];
       if(a[i]%2!=0){
           t=t+a[i];
       }
   }
   
   cout<<t<<endl;

    return 0;
}