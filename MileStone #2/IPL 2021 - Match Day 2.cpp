#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        
        multiset<int> temp;
        vector<int> ans;
        
        for(int i=0;i<k;i++){
            temp.insert(arr[i]);
        }
        ans.push_back(*temp.rbegin());
        
        for(int i=k;i<n;i++){
            temp.erase(temp.find(arr[i-k]));
            temp.insert(arr[i]);
            ans.push_back(*temp.rbegin());
        }
        return ans;
            
            
            // sort(arr.begin(),arr.end());
            
            // ans.push_back(*temp.rbegin());
            // temp.clear();
            
            
        
        // your code here
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends