//author :shreyamalogi

//Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

//sliding window technique
//we need to keep taking the sum and while sum is greater than x, we will continuosly record the minimum we will keep shrinking the left window
//i is right side, l is left side

//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	
	int a[n],i,l=0,sum=0;
	for(i=0;i<n;i++) cin>>a[i];
	
	int mn=32000;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		while(sum>x)
		{
			mn=min(mn,i-l+1);
			sum-=a[l];
			l++;
		}
		cout<<mn<<endl;
	}
     return 0;
}

//6 51
//1 4 45 6 0 19
//32000
//32000
//32000
//3
//3
//3

//5 9
//1 10 5 2 7
//32000
//1
//1
//1
//1

