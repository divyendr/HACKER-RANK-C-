#include <iostream>
using namespace std;
int main() {
    long long int n,m,i,r;
    cin>>n;
    while(n--){
        cin>>m;
        long int t=0;
        
        while(m>0){
            r=m&1;
            if(r==1){
                t++;
            }
            m=m>>1;
        }
        cout<<t<<endl;
    }
    
 
    

    return 0;
}

