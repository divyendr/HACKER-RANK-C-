#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int l=0,j,k=1,i;
    while(s[l]!='\0'){
        l++;
    }
    
    for(j=0; j<l; j++){
       if(s[j]==s[j+1]){
           k++;
       }
       else{
           cout<<s[j]<<k;
           k=1;
       }
    }
    cout<<endl;
        
    return 0;
}