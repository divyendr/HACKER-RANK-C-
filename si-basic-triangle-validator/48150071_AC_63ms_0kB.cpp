#include <iostream>
using namespace std;
int main()
{
    long int a,b,c;
    cin>>a>>b>>c;
//Cond
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}

