class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        set <pair <int,int>> ans;
        while(j<nums.size()){
            int diff = nums[j]-nums[i];
            if(i==j){
                j++;
            }
            else if(diff>k){
                i++;
            }
            else if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff<k){
                j++;
            }
        }
        return ans.size();
    }
};