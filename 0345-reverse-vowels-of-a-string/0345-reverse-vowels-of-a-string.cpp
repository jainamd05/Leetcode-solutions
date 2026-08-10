class Solution {
public:
    bool vowel(char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
                || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        }

    string reverseVowels(string s) {
        vector<char> vowels ;
        vector<int> index ;

        for (int i = 0 ; i < s.size() ; i++ ){
            char c = s[i] ;
            if (vowel(c)){
                vowels.push_back(c) ;
                index.push_back(i) ;
            }
        }
        reverse(vowels.begin(), vowels.end());

        for (int i = 0; i < index.size(); i++) {
            s[index[i]] = vowels[i];
        }
        return s ;
    }
};