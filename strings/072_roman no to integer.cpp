//author :shreyamalogi
//roman no to integer



#include<bits/stdc++.h>

using namespace std;

int convert(string s)
{
	unordered_map<char,int> m;
	m['I']=1;
	m['V']=5;
	m['X']=10;
	m['L']=50;
	m['C']=100;
	m['D']=500;
	m['M']=1000;
	
	if(s.length()==1)
		return m[s[0]];
		
		int i;sum=0;
		
		for(i=0;i<s.length()-1;i++)
		{
			if(m[s[i]]<m[s[i+1]])
				sum+= m[s[i+1]-m[s[i]]];
				i++;
			else{
				sum+= m[s[i]];
			}
				
		}
		if(m[s[i]]<=m[s[i-1]]) //last char- second last
			sum+=m[s[i]];
			
			return sum;
	
}

int main()
{
	
	return 0;
}

