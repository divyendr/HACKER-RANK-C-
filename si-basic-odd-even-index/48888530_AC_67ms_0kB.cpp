#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i=0,j;
    while(s[i]!='\0'){
        i++;
    }
    for(j=1; j<i; j=j+2){
        cout<<s[j];
    }
    for(j=0; j<i; j=j+2){
        cout<<s[j];
    }
    cout<<endl;

    return 0;
}