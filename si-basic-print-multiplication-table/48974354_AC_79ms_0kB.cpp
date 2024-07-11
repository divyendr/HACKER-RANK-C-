#include <iostream>

using namespace std;

void mult(int n,int i) {
    if (i > 10) {
        return;
    }
    cout<<n<<" * "<<i<<" = "<<n*i<< endl;
    mult(n,i+1);
}

int main() {
    int n;
    cin>>n;

    mult(n, 1);

    return 0;
}
