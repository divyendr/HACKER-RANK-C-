#include <iostream>
using namespace std;
int main() {
    long int a,b,t;
    cin>>a>>b;
    long int arr[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<a; i++){
        t=0;
        for(int j=0; j<b; j++){
            t=t+arr[i][j];
        }
        cout<<t<<endl;
    }
    
    

    return 0;
}