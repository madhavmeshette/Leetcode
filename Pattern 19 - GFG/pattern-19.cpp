//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
int star = n;
        int empty = 0;
        for(int i = 1; i <= 2 * n; i++)
        {
            for(int j = 0; j < star; j++)
            {
                cout << "*";
            }
            for(int s = 0; s < empty; s++)
            {
                cout << " ";
            }
            for(int j = 0; j < star; j++)
            {
                cout << "*";
            }
            if (i < n)
            {
                empty += 2;
                star--;
            }
            else if (i == n)
            {
                cout << endl;
                continue;
            }
            else
            {
                empty -= 2;
                star++;
            }
            cout << endl;
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