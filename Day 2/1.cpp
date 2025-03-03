// Q : https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1
//TC : O(n)
//SC : O(1)
class Solution {
  public:
  int isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    int isGoodorBad(string str) {
        int vowelCount = 0, consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            vowelCount++;
            consonantCount = 0; // Reset consonant count
        } else if(str[i]=='?'){
            vowelCount++;
            consonantCount++;
        } 
        else
        {
            consonantCount++;
            vowelCount = 0; // Reset vowel count
        }

        // If more than 5 vowels or more than 3 consonants in a row, return BAD
        if (vowelCount > 5 || consonantCount > 3)
            return 0;
    }
    return 1;
    }
};