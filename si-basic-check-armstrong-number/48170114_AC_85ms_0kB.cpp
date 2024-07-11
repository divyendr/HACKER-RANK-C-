#include <iostream>
using namespace std;
int main() {
   long int n,t,s,temp;

    cin>>n;
    temp=n;
    while(n!=0){
        t=n%10;
        s=s+t*t*t;
        n=n/10;
    }
    if(s==temp){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    

    return 0;
}