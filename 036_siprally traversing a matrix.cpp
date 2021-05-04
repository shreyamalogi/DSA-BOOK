//author :shreyamalogi

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
		
		int mat[n][m],i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>mat[i][j];
			}
		}
		
		//take variables
		int k,l;
		k=0;l=0;
		
		while(k<n && l<m)
		{
			for(i=1;i<m;i++)       //top
			cout<<mat[k][i]<<" ";
			k++;
			
			for(int i=k;i<n;i++)	//right
			cout<<mat[i][m-1]<<" ";
			m--;
			
			if(k<n)				
			{
				for(i=m-1;i>=l;i--)		//bottom
					cout<<mat[n-1][i]<<" ";
					m--;
			}
			
			if(l<m)
			{
				for(i=n-1;i>=k;i++)
					cout<<mat[i][l]<<" ";
					l++;
			}
		}
	}
	
	
     return 0;
}

