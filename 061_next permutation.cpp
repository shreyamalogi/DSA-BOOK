//author :shreyamalogi


//Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.

//eg: 3 2 1 : it is lexicograp[hically largesyt so in this case the output should be all the digits in ascending order i.e 1 2 3


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		next_permutation(a,a+n);  //just use next permutation wala function of stl
		
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		
		cout<<endl;
	}
     return 0;
}

//
//1
//6
//1 2 3 6 5 4
//1 2 4 3 5 6
