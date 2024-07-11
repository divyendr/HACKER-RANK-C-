#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,n,c,temp;
cin>>n;
a=1,b=1;
if(n==1){
    cout<<a;
}
else if(n==2){
    cout<<b;
}
for(int i=3;i<=n;i++){
    c=a+b;
    if(i==n){
        cout<<c<<endl;
    }
    temp=b;
    b=c;
    a=temp;
    //df
}
    return 0;
}