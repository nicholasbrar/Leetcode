class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> s;

        while(s.find(n) == s.end()){
            if(n == 1){
                return true;
            }
            s.insert(n);
            int num = 0;
            while(n > 0){
                int digit = n % 10;
                num += (digit * digit);
                n /= 10;
            }
            n = num;
        }
        return false;
    }
};
