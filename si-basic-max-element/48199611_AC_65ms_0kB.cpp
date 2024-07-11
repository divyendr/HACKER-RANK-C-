#include <iostream>
using namespace std;

int main() {
    int n,m;
    int a[100];
    cin>>n;
   for(int i=0; i<n; i++){
       cin>>a[i];
   }
   m=a[0];
   for(int i=1; i<n; i++){
       if(m<a[i]){
           m=a[i];
       }
   }
   cout<<m;

    return 0;
}