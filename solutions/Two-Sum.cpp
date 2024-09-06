include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> num_map;
        vector <int> result;

        for(int i = 0; i < nums.size(); i++){
            int num = target - nums[i];

            if (num_map.find(num) != num_map.end()) {
                result.push_back(num_map[num]);
                result.push_back(i);
                return result;
            }

        num_map[nums[i]] = i;
        }
        
        return result;
    }
};
