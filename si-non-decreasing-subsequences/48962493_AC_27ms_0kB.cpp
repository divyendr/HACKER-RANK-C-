#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    int MOD=1000000007;
    while (m--) {
        int n;
        cin >>n;
        vector<int>arr(n);
        for (int i=0; i<n; ++i) {
            cin>>arr[i];
        }

        vector<int> dp(n, 1);
        for (int i = 1; i <n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] >= arr[j]) {
                    dp[i] = (dp[i] + dp[j]) % MOD; 
                }
            }
        }

       
        int t= 0;
        for (int c:dp) {
            t= (t+c)%MOD;
        }

        cout<<t<<endl;
    }

    return 0;
}
