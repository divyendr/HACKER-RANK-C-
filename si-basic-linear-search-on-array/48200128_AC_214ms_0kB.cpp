#include <iostream>
using namespace std;

int main() {
    int n,m,t;
     long int a[100],b[100];
    cin>>n>>t;
    
   for(int i=0; i<n; i++){
       cin>>a[i];
       if(t==a[i]){
           m=i;
           break;
       }
       else{
           m=-1;
       }
   }
   
       cout<<m<<endl;
   
  

    return 0;
}
