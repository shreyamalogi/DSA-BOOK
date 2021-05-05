//author :shreyamalogi

//Given an NxN matrix Mat. Sort all elements of the matrix.

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
		int i,j;
		int a[n*n],k=0;
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			{
				cin>>a[k++];
			}
		}
		
		sort(a, a+n*n);
		for(i=0;i<n*n;i++)
		cout<<a[i]<<" ";
	}
	
    return 0;
}




//2
//4
//10 20 30 40
//15 25 35 45
//27 29 37 48
//32 33 39 50
//10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50
//3
//1 5 3
//2 8 7
//4 6 9
//1 2 3 4 5 6 7 8 9

