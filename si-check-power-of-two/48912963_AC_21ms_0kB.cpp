#include <iostream>

using namespace std;
int main() {
       long long int n,i;
       cin>>i;
       while(i--){
           cin>>n;
       
       if((n&(n-1))==0){
           cout<<"True"<<endl;
       }
       else{
           cout<<"False"<<endl;
       }
       }
       
    return 0;
}