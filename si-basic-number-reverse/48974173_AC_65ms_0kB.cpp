#include <iostream>


using namespace std;

long long revnum(long long n, long long r){
    if(n==0)
        return r;

    long long d=n%10;
    r=r*10+d;

    return revnum(n / 10, r);
}

int main(){
    long long n,k;
    cin>>n;

    
     k= revnum(n,0);
    cout<<k<<endl;
    

    return 0;
}
