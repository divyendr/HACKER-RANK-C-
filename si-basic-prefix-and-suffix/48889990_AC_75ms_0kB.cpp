#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
    
    getline(cin,s);
    
    int i=0,j,k=0,m;
    while(s[i]!='\0'){
        i++;
        
    }
   int y=0;
    for(j=0; j<i-1; j++){
      string c,d;
      c=s.substr(0,i-1-j);
      for(m=0; m<i-1; m++){
      d=s.substr(i-1-m);
      
      if(c==d){
          int x=c.size();
          if(y<=x){
              y=x;
          }
          
      }
      }
    }
    cout<<y<<endl;
    
}