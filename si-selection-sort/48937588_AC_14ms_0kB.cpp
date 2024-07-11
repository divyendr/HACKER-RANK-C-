#include<bits/stdc++.h>
using namespace std;
void ssk(){
    		int n,i,j,temp,index;
		cin>>n;
		int a[1000];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(i=n-1;i>0;i--)
		{
		    int temp;
			index=i;
			for(j=i-1;j>=0;j--)
			{
				if(a[j]>=a[index]){
					index=j;
				}
				
			}
			cout<<index<<" ";
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
			
		
		}
		
		cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		ssk();
	}
	return 0;
}