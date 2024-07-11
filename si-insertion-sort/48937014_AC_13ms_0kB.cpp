#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j,t;
	cin>>x;
	while(x--)
	{
		int n;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int c=0;
		for(i=1;i<n;i++)
		{
			t=a[i];
			j=i-1;
			while(j>=0&& t<a[j]){
				a[j+1]=a[j];
				j--;
				
			}
			a[j+1]=t;
			c=j+1;
			cout<<c<<" ";
		}
		cout<<endl;
		
	}
}