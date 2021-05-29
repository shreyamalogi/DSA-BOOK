//author :shreyamalogi

/*

Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. You are given a number N, you have to output the number of integers
 less than N in the sample space S.
 
 square root is a monotonic function : strictly incr so we can apply binary search concept here
 it can also be solved using inbuilt sq root func
 but binary search is optimized way
 tc: o(log n)

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int l=1,h=n;
	int ans=0;
	
	while(l<=h)
	{
		int mid=l+(h-1)/2;
		
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		else if(mid*mid<n)
		{
			l=mid+1; //check on right side 
			ans=mid; //which are not perfect sqaures
		}
		else
			h=mid-1;
	}
	cout<<ans;
     return 0;
}

