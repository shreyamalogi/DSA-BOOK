

//author :shreyamalogi

//find factorial of a large number
//i think we can find factorial upto 15 cuz after that we cant have large number right

#include<bits/stdc++.h>

using namespace std;

void multiply(vector<int> &v, int x)
{
	int carry=0,mul;   //in multiplication table we have carry
	for(int i=0; i<v.size();i++)
	{
		mul=v[i]*x + carry;  //let us say
		v[i]=mul%10;
		carry=mul/10;
	}
	
	while(carry)
	{
		v.push_back(carry%10);
		carry/=10;
	}
}

void fact(int n)
{
	vector<int> v; 					//take vector of integer type
	v.push_back(1); 		 		//push 1 into the vector initially
		
	for(int i=1;i<=n;i++)
		multiply(v,i);    			//multiply is a function which has 2 parameters vector and current integer
		
	reverse(v.begin(),v.end());  	//we will reverse the vector
	
	int i=0;
	while(v[i]==0)
	i++;
	
	for(int j=i; j<v.size(); j++) cout<<v[j]; //basically we will be outputing all the digits but inorder to find digits, declare digits func as multiply
	
}

int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
	
//		cout<<fact(n)<<endl; blunder error as we dont have to cout anything,
	fact(n);  //just call the function
	cout<<endl;
}
    return 0;
}
//
//2
//5
//120
//10
//3628800
