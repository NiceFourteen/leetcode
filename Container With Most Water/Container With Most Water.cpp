class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0,base = 0;
        int low = 0,high = height.size()-1;
        while(low < high){

            base = height[low] < height[high] ? height[low] : height[high];
            // cout<<base<<endl;
            max = max < base*(high - low) ? base*(high - low) : max;

            if(height[low] > height[high]){
                high--;
            } else if(height[low] < height[high]){
                low++;
            } else {
                if(height[low + 1] > height[high - 1]){
                    low++;
                } else {
                    high--;
                }
            }
        }
        return max;
    }
};
