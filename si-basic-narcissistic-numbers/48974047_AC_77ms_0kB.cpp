#include<iostream>
#include<cmath>
using namespace std;
long int nar(int n, int m){
    
     if(n>0)
     return  pow(n%10,m)+nar((n/10),m);
     else
     return 0;
     
}
int main(){
    int n,t=0;
    cin>>n;
    int temp=n;
    while(temp>0){
        t++;
       temp=temp/10;
    }
   
  if(nar(n,t)==n)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
}