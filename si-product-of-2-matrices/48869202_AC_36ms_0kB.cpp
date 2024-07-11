#include <iostream>
using namespace std;
int main() {
    long int a,b,c,d,t,i,j,k,n;
    cin>>n;
    while(n--){
    cin>>a>>b;
    long int arr[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    cin>>c>>d;
    long int arr1[c][d];
    for( i=0; i<c; i++){
        for(j=0; j<d; j++){
            cin>>arr1[i][j];
        }
    }
    long int t[a][d];
    for(i=0; i<a; i++){
        for(j=0; j<d; j++){
            t[i][j]=0;
            for(k=0; k<b; k++){
                t[i][j]=t[i][j]+(arr[i][k]*arr1[k][j]);
            }
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<d; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
    
    return 0;
}