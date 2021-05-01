//author :shreyamalogi

//array subset of another array
//in interviews we actually cant use map but yea im using though

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int m,n;
		cin>>m,n;
		
		long long int a[m],b[n],i;
		unordered_map<long long int, long long int> m1,m2
		for(i=0;i<m;i++)
		{
			cin>>a[i];
			m1[a[i]]++;
		}
		
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			m2[b[i]]++;
		}
	}
     return 0;
}

//incomplete code....wait i will try without using unordered map

