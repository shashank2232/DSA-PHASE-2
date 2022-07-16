// PHONE-KEYPAD PROBLEM
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
// Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
class Solution {
    void solve(int index,string mapping[],string output,vector<string>&ans,string digits)
    {
        // base case
        if(index>=digits.length())          // when index reaches out of string,insert that string in answer & return to get other answers
        {
            ans.push_back(output);
            return;
        }
        // rec case
        int number=digits[index]-'0';           // converting string to number i.e. '2' to 2
        string value=mapping[number];           // getting the string from mapping of that number i.e. "abc" for 2 or "def" for 3
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);                    // inserting that character into output
            solve(index+1,mapping,output,ans,digits);      // solving for next index
            output.pop_back();                             // while returning,removing that character as for new answer,we need to start again from empty string
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        solve(index,mapping,output,ans,digits);
        return ans;
    }
};

// Input: digits = "23"     Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Input: digits = "2"         Output: ["a","b","c"]