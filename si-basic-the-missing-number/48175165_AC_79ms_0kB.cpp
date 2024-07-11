#include <iostream>

using namespace std;
int main() {
   int n=99,s,t=0,k;
   int a[n];
  s=5050;
  for(int i=0; i<n; i++){
     cin>>a[i];
     t=t+a[i];
  }
  k=s-t;
  cout<<k<<endl;;

   
    return 0;
}