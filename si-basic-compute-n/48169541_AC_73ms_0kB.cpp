#include <iostream>
using namespace std;
int main() {
    int n,t=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        t=t*i;
    }
    cout<<t<<endl;

    return 0;
}