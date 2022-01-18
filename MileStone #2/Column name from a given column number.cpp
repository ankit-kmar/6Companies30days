#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while(n--){
            int x = n%26;
            char res = (char)(65 + x);
            ans = res+ans;
            n=n/26;
        }
        return ans;
        // your code here
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends