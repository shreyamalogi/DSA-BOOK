//author :shreyamalogi

/*
we actually need to considerv a data structure which dont allow duplicates so we take a set
ordered set will increse the time complexity so we are taking unordered set
we can use merge function: tc: o(m+n)


*/


//find the union and  of 2 sorted arrays

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


