class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        
        for(int i=0;i<t.size();i++){
            if(t[i] == "+" || t[i]=="*" || t[i]=="/" || t[i]=="-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                
                if(t[i] == "+") a = b + a;
                else if(t[i] == "*") a = b * a;
                else if(t[i] == "/") a = b / a;
                else if(t[i] == "-") a = b - a;
                
                s.push(a);
            }else{
                int m = stoi(t[i]);
                s.push(m);
            }
        }
        return s.top();
    }
};