//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		  int  originalvalue = n;
		    int revnum =0;
		 while (n>0){
		     int rev=n%10;
		     revnum = revnum *10 +rev;
		     n=n/10;
		 }
		 if ( revnum== originalvalue)
		   return "Yes";
		  else 
	        return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends