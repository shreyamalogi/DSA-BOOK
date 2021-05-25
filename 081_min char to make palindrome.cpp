//author :shreyamalogi

/*
Minimum characters to be added at front to make
 string palindrome
 
 brute force
 tart checking the string each 
 time if it is a palindrome and 
 if not, then delete the last 
 character and check again. 
 When the string gets reduced to 
 wither a palindrome or empty then the number of characters deleted from the end till now will be the answer as those characters could have been inserted at the beginning of the original string in the order which will will
  make the string a palindrome.

o(n2) tc

but for better approach we can use kmp algo

*/


//#include<bits/stdc++.h>
//using namespace std;
// 
//// function for checking string is palindrome or not
//bool ispalindrome(string s)
//{
//    int l = s.length();
//    int j;
//     
//    for(int i = 0, j = l - 1; i <= j; i++, j--)
//    {
//        if(s[i] != s[j])
//            return false;
//    }
//    return true;
//}
// 
//
//int main()
//{
//    string s = "BABABAA";
//    int cnt = 0;
//    int flag = 0;
//     
//    while(s.length()>0)
//    {
//        // if string becomes palindrome then break
//        if(ispalindrome(s))
//        {
//            flag = 1;
//             break;
//        }
//        else
//        {
//        cnt++;
//         
//        // erase the last element of the string
//        s.erase(s.begin() + s.length() - 1);
//        }
//    }
//     
//    // print the number of insertion at front
//    if(flag)
//        cout << cnt;
//}
////2


#include <bits/stdc++.h>
using namespace std;
 
// returns vector lps for given string str
vector<int> computeLPSArray(string str)
{
    int M = str.length();
    vector<int> lps(M);
 
    int len = 0;
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (str[i] != str[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0)
            {
                len = lps[len-1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
 
// Method returns minimum character to be added at
// front to make string palindrome
int getMinCharToAddedToMakeStringPalin(string str)
{
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
 
    // Get concatenation of string, special character
    // and reverse string
    string concat = str + "$" + revStr;
 
    //  Get LPS array of this concatenated string
    vector<int> lps = computeLPSArray(concat);
 
    // By subtracting last entry of lps vector from
    // string length, we will get our result
    return (str.length() - lps.back());
}
 

int main()
{
    string str = "AACECAAAA";
    cout << getMinCharToAddedToMakeStringPalin(str);
    return 0;
}

