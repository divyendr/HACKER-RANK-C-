#include <iostream>
using namespace std;
long long sumodd(int a[], int i, int n, long long sum) {
    if(i>=n) {
        return sum;
    }
    if (a[i]%2!=0) {
        sum+=a[i];
    }
    return sumodd(a, i+1, n, sum);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int j=0; j<n; j++) {
        cin>>a[j];
    }
    long long r=sumodd(a,0,n,0);
    cout<<r;
    return 0;
}
