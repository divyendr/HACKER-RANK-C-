#include <iostream>
using namespace std;
int main() {
    long int a,b,i,j,n,t;
    cin>>n;
    t=1;
    while(n--){
        
        cin>>a;
    long int arr[a][a];
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            cin>>arr[i][j];
        }
    }
   cout<<"Test Case #"<<t++<<":"<<endl;
    for(i=0; i<a; i++){
        for(j=a-1; j>=0; j--){
            
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    }
    
    
    

    return 0;
}