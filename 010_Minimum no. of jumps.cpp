
//author :shreyamalogi
//mimimum no. of jumps

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
	 	for(i=0; i<n; i++)
	 	cin>>a[i];
	 	
	 	int mx=a[0], step=a[0], jump=1; //initially 3 variables
	 	for(int i=1; i<n; i++)          //run a loop from 1 to n
	 	{
	 		if(i==n-1)               //if i becomes n-1, i have to
	 		{cout<<jump;              //print jump
	 		  break;                  //and break out
	 		}
	 		mx=max(mx,a[i]+i);        //otherwise my max will be updated to/with a[i]+i
	 	step--;                      //then i will decrease step count and check 	
	 	if(step==0)                  //if step becomes 0
	 	{
	 		jump++;                  //then increment jump
	 		if(i>=mx)
	 		{
	 			cout<<-1;
	 			break;
			}
			
			step=mx-i;
		}
	}
	    
 
	 if(i!=n)                      //if i is not equal to n
	 	cout<<-1<<endl;            //then i will print -1
 }
     return 0;
}


//2
//11
//1 3 5 8 9 2 6 7 6 8 9
//
//6
//1 4 3 2 6 7
//



//3
//2

