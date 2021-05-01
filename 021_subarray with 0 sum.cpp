//author :shreyamalogi

//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

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
		int a[n],sum=0,i;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		unordered_map<int,int> m;
		
		for(int i=0; i<n;i++)
		{
			sum+=a[i];     //we will take the cumulative sum which is the prefix sum
			if(sum==0)     //if the sum is 0 we will directly breakout
			break;
			
			if(m.find(sum)!=m.end())  //otherwise if the sum is found in the map we will break out
			break;
			
			m[sum]++;  //else we will say 
		}
		
		if(i==n)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
		
	}
     return 0;
     
     
     
}


//5
//4 2 -3 1 6

//yes

