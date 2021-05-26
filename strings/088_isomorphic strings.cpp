//author :shreyamalogi

/*
we need 2 arrays
1 will be boolean
1 will be map 

therefore we need 2 extra space


*/


#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);


// This function returns true if str1 and str2 are ismorphic
// else returns false
bool areIsomorphic(string s1, string s2)
{
    
    if(s1.length()!=s2.length())
        return 0;
        
    bool present[256]={false};
    int map[256];
    memset(map,-1,sizeof(map));
    
    for(int i=0;i<s1.length();++i)
      {
          if(map[s1[i]]==-1) //first occurence
          {
              if(present[s2[i]])
                  return false;
                  
              present[s2[i]]=true;
              map[s1[i]]=s2[i];
          }
          
          else
          {
              if(map[s1[i]]!=s2[i])
                 return false;
          }
      }
      
      return true;
}

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
//
//2
//aab
//xxy

//1


//Explanation: There are two different
//charactersin aab and xxy, i.e a and b
//with frequency 2and 1 respectively.

