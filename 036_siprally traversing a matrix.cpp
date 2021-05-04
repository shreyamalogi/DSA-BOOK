//author :shreyamalogi

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	//spiral order print
	int row_start=0, row_end=n-1, col_start=0, col_end=m-1;  //initializing
	
	while(row_start<=row_end && col_start<=col_end)
	{
		//for row start
		for(int col = col_start; col<=col_end; col++)
			cout<<a[row_start][col]<<" ";
			row_start++;
			
		//for column end
		for(int row=row_start;row<=row_end;row++)
            cout<<a[row][col_end]<<"  ";
        	col_end--;
        	
        	
     	if(row_start<=row_end)
    	{
        for(int col=col_end;col>=col_start;col--)
            cout<<a[row_end][col]<<"  ";
    	}	
        row_end--;

  		if(col_start<=col_end)
    	{

        for(int row=row_end;row>=row_start;row--)
        {
            cout<<a[row][col_start]<<"  ";
    	}
        col_start++;  
    	}
    	
    	
		return 0;
	}
	
}

//4 4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//1 2 3 4 8  12  16  15  14  13  9  5  6 7 11
