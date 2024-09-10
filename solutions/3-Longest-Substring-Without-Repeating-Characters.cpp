class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0; 
        int current_length = 0;

        unordered_set<char> letters; 

        int i = 0, j = 0;

        while(j < s.size()){
            if(letters.find(s[j]) == letters.end()){
                    letters.insert(s[j]);
                    j++;
                    max_length = max(max_length, j - i);
                }
                else{
                    i++;
                    letters.erase(s[i-1]);
                }
            }
            
        return max_length;
    }
};
