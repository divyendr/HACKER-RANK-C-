#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
       int n;
       cin>>n;
       while(n--){
           int i,l,t=0;
           cin>>l;
           int a;
           for(i=1; i<=l; i++){
               cin>>a;
               t=t^a^i;
           }
           cout<<(t^(l+1))<<endl;
       }
       
    return 0;
}

