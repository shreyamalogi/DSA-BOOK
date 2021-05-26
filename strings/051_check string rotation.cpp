//author :shreyamalogi

//a program to check if strings are rotations of each other or not

//given 2 strings we need to say if s2 is rotation of s1

//tc: o(n) time complexity

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	int l1  = s1.length();		//s1 ka length and s2 ka length should be equal to get rotations
	int l2 = s2.length();
	
	if(l1!=l2) cout<<"no";
	else{
	string t= s1+s2;					//concatinate both strings to CHECK THE SUBSTRING s2
	if(t.find(s2)!=std::string::npos)	//find function 	//check if s2 is presesent or not
		cout<<"yes";
	else
		cout<<"no";
	}
     return 0;
}

//
//AACD
//ACDA
//yes
//adda
//addsaaa
//no
