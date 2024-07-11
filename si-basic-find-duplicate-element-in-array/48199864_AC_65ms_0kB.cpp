#include <iostream>
using namespace std;

int main() {
    int n,m;
     long int a[100];
    cin>>n;
    if(n>=2 && n<=100){
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
  
   for(int i=1; i<n-1; i++){
       for(int j=i+1; j<n; j++){
       if(a[i]==a[j]){
           cout<<a[i]<<endl;
           break;
       }
   }
   }
    }

    return 0;
}