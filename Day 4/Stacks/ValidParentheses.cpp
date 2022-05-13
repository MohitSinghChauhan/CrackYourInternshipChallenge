class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack <char> ans;
        
        for(int i=0; i<n; i++){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                ans.push(s[i]);
            }
            else{
                if(ans.empty()==true) return false;
                if(s[i]==')'){
                    if( ans.top()!='(') return false;
                    else ans.pop();
                }
                else if(s[i]=='}'){
                    if( ans.top()!='{') return false;
                    else ans.pop();
                }
                else if(s[i]==']'){
                    if( ans.top()!='[') return false;
                    else ans.pop();
                }
            }
                
        }
        if(ans.empty()!=true) return false;
        return true;
        
    }
};