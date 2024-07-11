#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        mp[k]++;
        
        
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int c;
        cin>>c;
        cout<<mp[c]<<endl;
    }

}