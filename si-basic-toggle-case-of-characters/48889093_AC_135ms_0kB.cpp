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
        char c;
        if(islower(s[j])){
            c=toupper(s[j]);
            cout<<c;
        }
        else{
            c=tolower(s[j]);
            cout<<c;
        }
    }
    cout<<endl;
        
    return 0;
}