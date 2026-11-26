class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) return false ;

        bool alice = true ;
        int requirement = 10 ;
        while (n >= requirement){
            n -= requirement ;
            requirement -= 1 ;

            if (requirement%2 != 0) alice = true ;
            else alice = false ;
        }
        return alice ;
    }
};