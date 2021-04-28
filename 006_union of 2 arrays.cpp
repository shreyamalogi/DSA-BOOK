//author :shreyamalogi
//find the union and intersection of 2 sorted arrays

#include<bits/stdc++.h>

using namespace std;

int main()
{
	 int tt;
	 cin>>tt;
	 while(tt--)
	 {
	 	int n,m;
	 	cin>>n>>m;
	 	int a[n],b[n],i;
	 	set<int>s;
	 	for(i=0; i<n; i++)
	 	{
	 		cin>>a[i];
	 		s.insert(a[i]);
		 }
		 
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			s.insert(b[i]);
		 } 
		 cout<<s.size()<<endl;
	 }
     return 0;
}

