
#include <iostream>
using namespace std;
void search(int a[], int m, int n){
    int i;
    for(i=0; i<m; i++){
        if(n==a[i]){
            cout<<i<<endl;
            break;
        }
    }
    if(i==m)
        cout<<(-1)<<endl;
}
int main() {
    int m,n;;
    cin>>m>>n;
    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    search(a,m,n);

    return 0;
}