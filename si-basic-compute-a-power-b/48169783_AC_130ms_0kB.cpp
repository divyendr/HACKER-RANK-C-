#include <iostream>
using namespace std;
int main() {
    int n,t;
    long int l=1;
    cin>>n>>t;
    for(int i=1; i<=t; i++){
        l=l*n;
    }
    cout<<l<<endl;

    return 0;
}