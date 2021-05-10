//author :shreyamalogi

//permutations of a given string
//can be done with stl
//but if that is not allowed then



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
//		string s;
//		cin>>s;
//		int n= s.length();
//		
//		sort(s.begin(),s.end());
//		do{
//			cout<<s<<" ";
//		}while (next_permutation(s.begin(), s.end()));
//		
//		cout<<endl;
//	}
//     return 0;
//}


//2
//abc
//abc acb bac bca cab cba
//absg
//abgs absg agbs agsb asbg asgb bags basg bgas bgsa bsag bsga gabs gasb gbas gbsa gsab gsba sabg sagb sbag sbga sgab sgba



#include<bits/stdc++.h>
using namespace std;

void permutation(string s, int l, int r)
{
	if(l==r)							//base case
		cout<<s<<" ";
	else{
		for(int i=l;i<=r;i++)
		{
			swap(s[l], s[i]);			//swap
			permutation(s,l+1,r);		//recursive call
			swap(s[l],s[i]);  			//backtracing step
		}
	}
}

int main()
{
	string s;
	cin>>s;
	permutation(s,0,s.length()-1);
	cout<<endl;
	return 0;
}

//abc
//abc acb bac bca cba cab
