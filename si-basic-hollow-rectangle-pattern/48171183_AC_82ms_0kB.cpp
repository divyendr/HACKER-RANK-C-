#include <iostream>
using namespace std;
int main() {
  int n,m;
  
  cin>>n>>m;
  
  for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
          if(i==0 || j==0 || i==m-1 || j==n-1){
              cout<<"*";
          }
          else{
              cout<<" ";
          }
      }
      cout<<endl;
  }
  

    return 0;
}