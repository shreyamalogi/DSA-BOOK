//author:shreyamalogi
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
for(i=0;i<n;i++)
cin>>a[i];

int cs=a[0], ms=a[0]; //we need just 2 variables current sum and maximum sum

for(i=1; i<n; i++)
{
cs=max(cs+a[i],a[i]); //current sum will be maximum of ce or ce +cs
ms=max(ms,cs); //maximum element will be max of max sum or current sum
}
cout<<ms<<endl; //print max sum
}
return 0;
}

// 1
// 5
// 1 2 3 -2 5

//9
