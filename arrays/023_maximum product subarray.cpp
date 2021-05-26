//author :shreyamalogi

//Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
//Note: Use 64-bit integer data type to avoid overflow.


// Auxiliary Space: O(1)
//Time Complexity: O(N)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	 long long int n;
	 cin>>n;
	 long long int a[n],i;
	 for(i=0; i<n; i++) cin>>a[i];
	 
	 long long int x,y,z, mx=a[0],mn=a[0],res=a[0]; //let us take variables 
	 
	 for(i=1; i<n; i++)
	 {
	 	x=a[i];
	 	y=mx*x;
	 	z=mn*x;
	 	mx=max(x, max(y,z));
	 	mn=min(x, min(y,z));
	 	res=max(res, max(mx,mn));
	 }
	 cout<<res;
     return 0;
}

//5
//6 -3 -10 0 2
//
//Explanation: Subarray with maximum product
//is  6, -3, -10 which gives product as 180.

//180

