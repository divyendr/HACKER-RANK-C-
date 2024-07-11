#include <iostream>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    for(int i=1; i<=n; i++){
        t=t+i*i;
    }
    cout<<t<<endl;

    return 0;
}