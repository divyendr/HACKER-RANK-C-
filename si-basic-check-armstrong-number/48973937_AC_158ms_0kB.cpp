#include<iostream>
#include<cmath>
using namespace std;
int arm(int n){
     if(n>0)
     return ((n%10)*(n%10)*(n%10)) +arm((n/10));
     else
     return 0;
     
}
int main(){
    int n;
    cin>>n;
   if(arm(n)==n)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
}