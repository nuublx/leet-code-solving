class Solution {
public:
    int maxArea(vector<int>& height) {
        int l,r, size = height.size(), max_area = -1;
        l = 0;
        r = size - 1;

        while( l < r){
            int smallest_height = min(height[l], height[r]);
            int current_area = smallest_height *(r - l);
            max_area = max(current_area, max_area);
            height[l] > height[r] ? r--: l++;
        }

        return max_area;
    }
};