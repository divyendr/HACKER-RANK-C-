
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1)
    return 1;
    else
    return (n*n)+sum(n-1);
}
int main() {
    int m,n;
   cin>>n;
   m=sum(n);
   
   cout<<m;

    return 0;
}