//author :shreyamalogi
//min no of opertations req to make an array palindrome

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
		int a[n],i;
		for(i=0;i<n;i++) cin>>a[i];
		
		int j=n-1,ans=0;
		i=0;
		while(i<=j) //2 pointer prob
		{
			if(a[i]==a[j]) //the corner elements are equal move both the pointers
			{
				i++;
				j--;
			}
			else if(a[i]>a[j])
			{
				j--;
				a[j]+=a[j+1]; //merge
				ans++;
				
			}
			else
			{
				i++;
				a[i]+=a[i-1];
				ans++;
			}
		}
		cout<<ans<<endl;
	}
     return 0;
}


//2
//5
//3 2 3 3 5

//1

//4
//5 3 3 4

//3

