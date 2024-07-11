#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i=0,j,k=0;
    while(s[i]!='\0'){
        i++;
    }
    int o=0,c=0;
    for(j=0; j<i; j++){
        char x=tolower(s[j]);
       if(x=='a' || x=='e' ||x=='i' || x=='o' || x=='u'){
           o++;
          
          
       }
       else{
           c++;
            
       }
       
    }
   
        cout<<o<<" "<<c<<endl;
    
    
    

    return 0;
}