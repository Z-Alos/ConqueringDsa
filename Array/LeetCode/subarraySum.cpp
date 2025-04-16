class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int tsa = 0;
        int sum = 0;
        int i = 0, j = i;
        while(j < nums.size()){
           sum += nums[j];
           if(sum == k) tsa++;
           while(sum > k && i <= j){
               sum -= nums[i];
               i++;
               if(sum == k) tsa++;
           }
           j++;
        }
        return tsa;
    }
};
