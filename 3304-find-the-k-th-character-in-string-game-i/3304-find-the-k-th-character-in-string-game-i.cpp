class Solution {
public:
    string rec(string word, int k){
        if (word.size() >= k) return word ;
        string new_word = "" ;

        for(char ch : word){
            new_word += ch ;
            if (ch == 'z') new_word += "a" ;
            else new_word += ch + 1 ;
        }
        return rec(new_word, k) ;
    }

    char kthCharacter(int k) {
        string word = "a" ;
        word = rec(word, k) ;
        return word[k-1] ;
    }
};