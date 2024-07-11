#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=10; i++){
        int a=n*i;
        cout<<n<<" * "<<i<<" = "<<a<<endl;
    }

    return 0;
}