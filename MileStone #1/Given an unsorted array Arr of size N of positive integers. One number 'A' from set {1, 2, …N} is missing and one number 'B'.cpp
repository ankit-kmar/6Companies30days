#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        std::vector<int>v(n,0);
        for(int i=0;i<n;i++){
            v[arr[i]-1]++;
            
        }
        
        for(int i=0;i<n;i++){
            if(v[i]>1) ans[0]=i+1;
            if(v[i]==0) ans[1]=i+1;
        }
        // code here
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends