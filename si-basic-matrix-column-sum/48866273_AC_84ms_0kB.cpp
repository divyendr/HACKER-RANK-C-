#include <iostream>
using namespace std;
int main() {
    long int a,b,t,i,j;
    cin>>a>>b;
    long int arr[a][b];
    for(int i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<b; i++){
        t=0;
        for(j=0; j<a; j++){
            t=t+arr[j][i];
        }
        cout<<t<<endl;
    }
    
    return 0;
}
