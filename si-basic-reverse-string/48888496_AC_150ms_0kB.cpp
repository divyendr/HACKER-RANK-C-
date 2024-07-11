#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    while(i--){
        cout<<s[i];
    }

    return 0;
}