#include <iostream>
using namespace std;
int main() {
    long int a,b,i,j,c=0;
    cin>>a>>b;
    long int arr[a][b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                c++;
            }
        }
    }
    if(c>((a*b)/2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
   
    
    

    return 0;
}