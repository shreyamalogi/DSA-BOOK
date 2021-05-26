//author :shreyamalogi

//sort the array find the min such that 1st pointer is at min and 2nd pointer is at m-1
//keep moving both the pointers untill u reach the end of the array
#include<bits/stdc++.h>

using namespace std;

int main()
{

		long long int n;
		cin>>n;
		long long int a[n],i,j=0,mn=INT_MAX;
		for(i=0;i<n;i++) cin>>a[i];
		
		sort(a,a+n);
		
		long long int m;
		cin>>m;
		
		for(i=m-1;i<n;i++) //for i=m-1 till n we will run the loop so initially j will be 0
		{
			mn=min(mn,a[i]-a[j]);   //we will continuosly be recording the min
			j++; //and will be moving j pointer as well as i pointer and this is workin cuz we have already sorted the array
			
		}
		cout<<mn<<endl;
	
     return 0;
}

//7
//7 3 2 4 9 12 56
//3

//2

//8
//3 4 1 9 56 7 9 12
//5

//6







////author :shreyamalogi
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i=0;i<n;i++) cin>>a[i];
//		
//		int m;
//		cin>>m;
//		
//		sort(a,a+n);
//		
//		int mn=INT_MAX;
//		
//		for(int i=0;i+m-1<n;i++)
//		{
//			int d= a[i+m-1]-a[i]; //difference variable
//			
//			if(d<mn)
//			mn=d;  //update min by d
//		}
//		cout<<mn<<endl;
//	}
//     return 0;
//}
