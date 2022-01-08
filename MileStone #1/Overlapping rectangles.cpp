// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int ans = 1;
        vector<int> edge1;
        vector<int> edge2;
        // edge1[0] = max(L1[0],R1[0]);
        // edge1[1] = max(L1[1],R1[1]);
        
        // edge2[0] = min(L2[0],R2[0]);
        // edge2[1] = min(L2[1],R2[1]);
        
        if(R2[0] < L1[0] || R1[0] < L2[0]) ans=0;
        if(L2[1] < R1[1] || L1[1] < R2[1]) ans=0;
        
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends