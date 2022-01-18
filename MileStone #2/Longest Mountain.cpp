class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int count = 1;
        bool flag = false;;
        int j=0;
        int ans=0;
        
        for(int i=0; i<n; i++){
            j=i;
            
            while(j+1 < n && arr[j+1]>arr[j]){
                count++;
                j++;
            }
            
            while(i!=j && j+1 <n && arr[j]>arr[j+1]){
                count++;
                j++;
                flag = true;
            }
            if(i!=j && count>=3 && flag){
                ans = max(ans,count);
                j--;
            }
            i=j;
            count=1;
            flag = false;
            
        }
        return ans;
    }
};