
//author :shreyamalogi

//we actually have 4 methods of approach
//but im using hashing unordered map approach cuz its optimized way but this maping i think we acnt use in interviews

//tc: o(n)
//sc: o(n)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin>>tt;
	while(tt--){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	
	unordered_map<int,int>m1;
	
	for(int i=0;i<m;i++) m1[a[i]]++;
	
	int c=0;
	for(int i=0;i<n;i++){
		if(m1[b[i]]){
			c++;
		}
	}
	if(c!=n)cout<<"no"<<endl;
	else cout<<"yes"<<endl;
    }
     return 0;
}

//2
//6 4
//11 1 13 2 3 7
//11 3 7 1
//yes
//53
//10 5 2 23 19
//19 5 6
//no

