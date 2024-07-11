#include <iostream>
using namespace std;
int main() {
    long int n;
    cin>>n;
    while(n--){
       long int l,k,m,i,r;
        cin>>l;
        m=0;
        i=32;
        while(i--){
            m= m<<1;
            k=1;
            r=0;
            if((l&1)==1){
                r=1;
            }
            else{
                r=0;
            }
            l=l>>1;
            m= m|r;
            
        }
       
        cout<<m<<endl;
        
    }
    

    return 0;
}

