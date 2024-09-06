class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        long power = 1; 
        int total = 0;
        
        for(int i = columnTitle.length() - 1; i >= 0; i--){
            int place = (columnTitle[i] - 'A' + 1); 
            total += (place * power);
            cout << place << " " << power << endl;
            power *= 26;
        }
        return total;
    }
};
