#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin>>n;
   long int a,s;
    while(n!=0){
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    cout<<s<<endl;

    return 0;
}