class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0;

        while(left<right){
            int x = min(height[left],height[right])*(right-left);

            if(height[left]>height[right]){
                right--;
            }else{
                left++;
                }

            area = max(area,x); 
        }

        return area;
    
    }
};
// sxkshan