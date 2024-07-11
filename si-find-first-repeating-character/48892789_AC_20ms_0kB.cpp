#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        
        string s;
        cin>>s;
        
        int l=s.size();
        int i,j,k=0;
        char c;
        for(i=0; i<l; i++){
          c=s[i];
          for(j=i+1; j<l; j++){
            if(c==s[j]){
              k++;
            }
          }
          if(k>0){
            break;
          }
        }
        if(k>0){
          cout<<c<<endl;
        }
        else{
          cout<<"."<<endl;
        }
    }
        
    return 0;
}