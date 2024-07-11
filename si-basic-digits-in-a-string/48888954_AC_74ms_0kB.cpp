#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
    
    getline(cin,s);
    
    int i=0,j,k=0;
    while(s[i]!='\0'){
        i++;
        
    }
    for(j=0; j<i; j++){
      
       if(isdigit(s[j])){
           k=0;
       }
       else{
           k=1;
           break;
       }
    }
    if(k==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
