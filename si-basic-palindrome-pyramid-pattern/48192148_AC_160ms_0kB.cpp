#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        char c='A';
       for(int j = 1; j <= i; j++){
           cout <<c<< " ";
           c++;
        }
        c--;
       for(int k = i-1; k >= 1; k--){
           c--;
           cout <<c<< " ";
       }
        cout << endl;
    }
    return 0;

}