class Solution {
public:

    bool check_same(char open,char close){
        if(open=='(' && close==')') return true;
        else if(open=='[' && close==']') return true;
        else if (open=='{' && close=='}') return true;
        else return false;
    }

    bool isValid(string s) {
        stack<char> s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                s1.push(s[i]);
            }
            else{
                if(s1.empty() || !check_same(s1.top(),s[i])){
                    return false;
                }
                
                    s1.pop();
                
            }

            
        }

        return s1.empty();
    }
};