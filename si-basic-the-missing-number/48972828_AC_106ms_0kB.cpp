
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}
int main() {
    int m,n=100,t=0;
    for(int i=0; i<99; i++){
        int x;
        cin>>x;
        t=t+x;
    }
   
   m=sum(n);
   t=m-t;
   
   cout<<t;

    return 0;
}