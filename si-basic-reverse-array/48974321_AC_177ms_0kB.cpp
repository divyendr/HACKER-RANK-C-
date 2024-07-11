#include <iostream>

using namespace std;

void rev(long int a[], int n) {
    if(n==0) {
        return;
    }
    cout<<a[n-1]<<" ";
    rev(a,n-1);
}
int main() {
    int n;
    cin>>n;
    long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rev(a, n);

    return 0;
}
