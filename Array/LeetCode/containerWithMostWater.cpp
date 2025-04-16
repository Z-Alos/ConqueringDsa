class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxCapacity = 0;
        int s = 0, e = height.size()-1;
        while (s < e){
            maxCapacity = max(maxCapacity, (e-s) * min(height[s], height[e]));
            if(height[s] < height[e]) s++;
            else e--;
        }
        return maxCapacity;
    }
};
