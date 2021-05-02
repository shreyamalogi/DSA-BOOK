//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

//actually this prob has many sol but the best will o(n) tc, o(1) sc


int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int n;
		cin>>n;
		
		long long int a[n],i;
		for(i=0;i<n;i++)  cin>>a[i];
		
		//we need variables her
		long long int sum=0, l, r, lmx=0, rmx=0;//let us take sum which will be the answer
		l=0;
		r=n-1;
		
		//so it is a 2 pointer approach untill l is less than r
		while(l<r)
		{
			if (lmx<rmx)
			{
				if(lmx<a[l])
					lmx=a[l];
			
				else
				{
					sum+=lmx-a[l];
					l++;
				}
			}
			
	     	else
			{
				if(rmx<a[r])
				rmx=a[r];
			
				else
				{
				sum+=rmx-a[r];
				r--;
				}
			}
		}
		cout<<sum<<endl;
	}

     return 0;
}

//1
//6
//3 0 0 2 0 4
//10

