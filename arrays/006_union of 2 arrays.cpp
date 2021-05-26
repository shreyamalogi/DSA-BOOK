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
	 	
	 	unordered_map<int,int>map; //cuz map contains distinct values which is our ultimate goal for this problem
	 	
	 	for(i=0; i<n; i++)
	 	{
	 		cin>>a[i];
	 		map[a[i]]++;
		 }
		 
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			map[b[i]]++;
		 } 
		 cout<<map.size()<<endl;  //we can simply print the size which is the answer of the question
	 }
     return 0;
}

//2
//5 3
//1 2 3 4 5
//1 2 3

//5


