#include <iostream>
using namespace std;
int main() {
    int n,a=1;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i+j>=n-1){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}