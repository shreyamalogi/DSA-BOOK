//author :shreyamalogi

//Split the binary string into substrings with equal number of 0s and 1s


//if count of zero is equal to count of 1 thenm answerwer will be 1


#include <bits/stdc++.h>
using namespace std;

int maxSubStr(string s, int n)
{						
    int zeroes = 0, ones = 0;	// To store the count of 0s and 1s
  
    // To store the count of maximum
    // substrings str can be divided into
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zeroes++;
        }
        else {
            ones++;
        }
        if (zeroes == ones) {
            cnt++;
        }
    }
  
    if (zeroes != ones) {
        return -1;
    }
  
    return cnt;
}
  

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    cout << maxSubStr(s, n);
    return 0;
}

//0100110101

//4
