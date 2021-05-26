//author :shreyamalogi


//transpose and reverse coloumns
//it automatically rotates by 90 degress in clowckwise direction
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	int a[n][m],i,j,k; //take k also
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	//transpose in place
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++) 				//j=i
		swap(a[i][j],a[j][i]);		   //swap
	}
	
	
	//reversing in place (in place means without taking extra space
	
	for(i=0;i<n;i++)
	{
		j=0;
		k=n-1; 					//k=c-1; r=c=n (where c rep coloums)
		while(j<k)
		{
			swap(a[j][i],a[k][i]);
			j++; 
			k--;
		}
		
	}
     return 0;
}

