#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int tt;
	 cin>>tt;
	 while(tt--)
	 {
	 	int n;
	 	cin>>n;
	 	
	 	int a[n],i;
	 	for(i=0;i<n;i++)
	 	cin>>a[i];
	 	
	 	long long int cs=a[0], ms=a[0]; //we need just 2 variables current sum and maximum sum
	 	
	 	for(i=1; i<n; i++)
	 	{
	 		cs=max(cs,ms); //current sum will be maximum of ce or ce +cs
	 		ms=max(ms,cs);         //maximum element will be max of max sum or current sum
		 }
		 cout<<ms<<endl;  //print max sum
	 }
     return 0;
}


