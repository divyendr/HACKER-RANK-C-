
#include <iostream>
using namespace std;
long int sum( long int a, long int b){
    
    if(b==0)
    return 1;
    else{
    return (a*sum(a,b-1));
    }
}
int main() {
    int a,b;
    long int m,n;
   cin>>a>>b;
   m=sum(a,b);
   
   cout<<m;

    return 0;
}