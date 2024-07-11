#include <iostream>
using namespace std;
int main() {
    long int a,b;
    cin>>a>>b;
    long int arr[a][b],arr1[a][b],t[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            t[i][j]=arr[i][j]+arr1[i][j];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}