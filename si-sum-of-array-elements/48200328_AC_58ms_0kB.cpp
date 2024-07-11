#include <iostream>
using namespace std;

int main() {
    int n,t;
    long int a,m;
    cin>>n;
    if(n>=1 && n<=100){
    for(int j=0; j<n; j++){
        cin>>t;
        m=0;
        for(int i=0; i<t; i++){
            cin>>a;
            m=m+a;
        }
        cout<<m<<endl;
    }
    
}
   
  

    return 0;
}