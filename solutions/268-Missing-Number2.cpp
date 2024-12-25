class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = ((nums.size()) * (nums.size() + 1)) / 2;
        int nums_sum = 0;

        for(int num : nums){
            nums_sum += num;
        }

        return (sum - nums_sum);
    }
};
