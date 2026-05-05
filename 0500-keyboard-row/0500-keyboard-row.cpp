class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        //we will store the ascii of each row and then find in that word in each row if any contradiction no
        
        vector<string> ans;
        
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        for(int i = 0; i < words.size(); i++){
            
            string w = words[i];
            string lower = "";
            
            for(char c : w){
                lower += tolower(c);
            }
            
            bool r1 = true, r2 = true, r3 = true;
            
            for(char c : lower){
                if(row1.find(c) == string::npos) r1 = false;
                if(row2.find(c) == string::npos) r2 = false;
                if(row3.find(c) == string::npos) r3 = false;
            }
            
            if(r1 || r2 || r3){
                ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};