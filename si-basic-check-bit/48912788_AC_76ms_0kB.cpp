#include <iostream>

using namespace std;
int main() {
       long int n,i;
       cin>>n>>i;
       if((n&(1<<i))==0){
           cout<<"false"<<endl;
       }
       else{
           cout<<"true"<<endl;
       }
    return 0;
}