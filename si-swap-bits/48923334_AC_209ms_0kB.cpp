#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--) {
        int n;
        cin>>n;
        int e=n&0xAAAAAAAA;
        //cout<<e<<endl;
        int o=n&0x55555555;
        //cout<<o<<endl;
        int t=(e>>1)|(o<<1);
        cout<<t<<endl;
    }
    return 0;
}
