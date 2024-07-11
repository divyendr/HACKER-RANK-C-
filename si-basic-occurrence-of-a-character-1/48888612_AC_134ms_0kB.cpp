#include <iostream>
using namespace std;
int main() {
    string s;
    char c;
    getline(cin,s);
    cin>>c;
    int i=0,j,k=0;
    while(s[i]!='\0'){
        i++;
    }
    for(j=0; j<i; j++){
        char x;
       
        
       if(s[j]==c){
           k++;
       }
    }
    
    cout<<k<<endl;

    return 0;
}