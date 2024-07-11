#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
//@
using namespace std;
int main(){
    int num,a,b,c=1,temp,d;
cin>>num;
d=num;
  stringstream stream;
  stream << num;
    string str;
    stream >> str;
    a=str.length();
    while(num!=0){
        b=num%10;
        for(int i=1;i<=a;i++){
            c*=b;
        }
        temp+=c;
        c=1;
        num/=10;
    }
    if(temp==d){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 0;
}
