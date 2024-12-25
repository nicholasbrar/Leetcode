class Solution {
public:
    bool isUgly(int n) {
        int num = n; 

        bool ugly = false;

        while(!ugly){
            int numTracker = num;
            if(num % 2 == 0){
                num /= 2;
            }
            if(num % 3 == 0){
                num /= 3;
            }
            if(num % 5 == 0){
                num /= 5;
            }
            
            if(num == 1){
                return true;
            }
            else if(numTracker == num){
                ugly = false;
                break;
            }
        }

        return(false);
    }
};
