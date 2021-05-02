//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,sum;
	cin>>n>>sum;
	long long int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	long long int j,k,f=0;
	
	for(i=0;i<n;i++)
	{
		
		//when using 2 pointer approach 1 of them will always be fixed
		j=i+1;
		k=n-1;
		
	}
	
	while(j<k)
	{
		if (a[i]+a[j]+a[k]==sum)
		{
			f=1;
			break;
		}
		else if(a[i]+a[j]+a[k]<sum)
		j++;
		
		else
		k--;
		
		if(f)
	 break;
	 
	}
	
	if(f)
	cout<<1<<endl;
	
	else
	cout<<0<<endl;
	
	
	 
     return 0;
}

//n = 6, X = 13
//arr[] = [1 4 45 6 10 8]
//Output:
//1
//Explanation:
//The triplet {1, 4, 8} in 
//the array sums up to 13.

