#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i=0,j,k=0;
    while(s[i]!='\0'){
        i++;
    }
    
    for(j=0; j<i; j++){
        char x=tolower(s[j]);
       if(x=='a' || x=='e' ||x=='i' || x=='o' || x=='u'){
           k=0;
          
          
       }
       else{
           k=1;
            break;
       }
       
    }
    if(k==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    

    return 0;
}