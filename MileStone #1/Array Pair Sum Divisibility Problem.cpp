#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        
        
        
        if(nums.size() % 2 != 0) return false;
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i] % k]++;
        }
        
        for(int i=0;i<nums.size();i++){
            
            int rem1 = nums[i] % k;
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        
        
        
        return true;
        
        
        // Code here.
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends