class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        for(int bill : bills){
            if(bill == 5) fives++;
            else if(bill == 10){
                if(fives==0) return false;
                fives--;
                tens++;
            }
            else{ // bill == 20
                if(tens >= 1 and fives>=1){
                    tens--;
                    fives--;
                }
                else if(fives >= 3){
                    fives -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};
