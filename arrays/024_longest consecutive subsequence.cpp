//author :shreyamalogi

//Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

//we dont care abt the order that is why we can use hash array

//Expected Time Complexity: O(N).
//Expected Auxiliary Space: O(N).


#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, m=0, cnt=0, m1=0;
	cin>>n;
	long long int a,i;
	long long int h[100005]={0};  //hash array and let all elements be 0
		for(i=0;i<n;i++)
		{
			cin>>a;
			h[a]=1;  //will be 1 if the particular element is present
			m1=max(a,m1);
		}
		
		for(i=0;i<=m1;i++)  //scan though the hash array
		{
			if(h[i]==1)  //that means element is present in the array
			cnt++;       
			
			else
			{
				m=max(m,cnt); //if h[i] is not 1 then record the maximum
				cnt=0;        //and reset count to 0
			}
		}
		m=max(m,cnt);
		cout<<m<<endl;   //finally print the maximum
     return 0;
}

//7
//2 6 1 9 4 5 3

//6

//Explanation:
//The consecutive numbers here
//are 1, 2, 3, 4, 5, 6. These 6 
//numbers form the longest consecutive
//subsquence.




