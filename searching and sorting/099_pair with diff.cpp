//author :shreyamalogi

/*

find a pair with a given difference

approach 1 is hashing where tc : o(n), sc: o(n)
hashmap: 1: check if a[i]+k, a[i]-k are present 
approach 2 is sorting where tc: o(nlogn) sc: o(1)
sort the array with merge sort
take the idicides with l=0, r=1 (becomes two pointer kind of)

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n,k; //k will be diff of pairs
	cin>>n>>k;
	long long int a[n],i,l,r;
	for(i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	
	bool flag =false; //it dont have an ans
	l=0,r=1;
	
	while(l<n && r<n)
	{
		if(a[r]-a[l]==k && l!=r)
		{
			flag=true;
			break;
		}
		else if(a[r]-a[l]<k)
		r++;
		
		else
		l++;
		
	}
	
	if(flag)
		cout<<1<<endl;
	else
		cout<<-1<<endl;
		
	}
     return 0;
}

