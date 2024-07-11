#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int count = 1;
    for (int i=1; i<=n; ++i) {
        int a=count;
        for (int j=1; j<=i; ++j) {
            cout<<a<< " ";
            a+=n-j;
        }
        cout << endl;
        count++;
    }
    return 0; 
}