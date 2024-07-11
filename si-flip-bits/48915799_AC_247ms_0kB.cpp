#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        int l,k,m,i;
        cin>>l>>k;
        m=l^k;
       
        int t=0;
        for(i=0; i<=32; i++){
            int x=m&1;
            
            if(x==1){
                t++;
            }
           m= m >> 1;
            
        }
        cout<<t<<endl;
        
    }
    

    return 0;
}