class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> sol; 

        int zeroes = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                sol.push_back(nums[i]);
            }
            else{ 
                zeroes++;
            }
        }

        for(int i = 0; i < zeroes; i++){
            sol.push_back(0);
        }

        nums = sol;
    }
};
