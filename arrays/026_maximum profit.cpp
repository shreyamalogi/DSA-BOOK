//author :shreyamalogi

//Maximum profit by buying and selling a share at most twice.



#include<bits/stdc++.h>

using namespace std;

//this is the general code for any buying and selling problem with atmost k times
int maxprofit(int a[], int n,int k)
{
	if(k>=n/2)
	{
		int maxp=0,i;
		for(i=0;i<n;i++)
		{
			if(a[i]>a[i-1])
			maxp+=a[i]-a[i-1];
		}
		return maxp;
	}
}
int mx[k+1]={0}
int lp[k+1];

for(int i=0;i<k;i++)
{
	lp[i]=3200;
}
//......................

//in this particular question that we are solving



int main()
{
	int n;
	cin>>n;
	int a[n],i;
	int k=2; //k will be 2 cuz they are teling twice (in question)
	for(i=0;i<n;i++) cout<<a[i];
	
	cout<<maxprofit(a,n,k)<<endl;
     return 0;
}

//need help with this
