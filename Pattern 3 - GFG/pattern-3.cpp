//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
         int m=1;
    for (int i =0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i)
            {
                cout<<m<<" ";
                m++;
                
            }
        }
        cout<<endl;
        m=1;
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends