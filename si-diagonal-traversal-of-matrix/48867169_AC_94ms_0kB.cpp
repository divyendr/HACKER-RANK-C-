#include <iostream>
using namespace std;
int main() {
    long int a,b,i,j,n,t,s;
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
   t=0;
   t=(a-1)*(-1);
   while(t<a){
       s=0;
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            if((i-j)==t){
                s=s+arr[i][j];
            }
        }
        
       
    }
     cout<<s<<" ";
    t++;
    }
    cout<<endl;
    }
    
    
    

    return 0;
}