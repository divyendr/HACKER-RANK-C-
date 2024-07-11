#include <iostream>
using namespace std;
int main() {
    long int a,b,i,j;
    cin>>a>>b;
    long int arr[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
   
    for(i=0; i<b; i++){
        for(j=0; j<a; j++){
            
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}