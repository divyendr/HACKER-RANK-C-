
#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
    int n;
    cin>>n;
    int a[n],k;
    for(int f=0;f<n;f++)
      cin>>a[f];
    for(int i=0;i<n;i++){
      k=i;
    for(int j=i;j<n;j++){
      
      if(a[j]<a[k]){
        k=j;
      }
    }
    int m=a[k];
    a[k]=a[i];
    a[i]=m;
    
    } 
    for(int i=0;i<n;i++)
      cout<<a[i]<<' ';
      cout<<endl;
    }
    return 0;
}