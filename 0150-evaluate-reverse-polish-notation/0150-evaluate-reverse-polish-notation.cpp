class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int a, b;
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+" || tokens[i] == "-" ||
    tokens[i] == "*" || tokens[i] == "/") {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                switch (tokens[i][0]) {
                case '+':
                    s.push(a + b);
                    break;

                case '-':
                    s.push(a - b);
                    break;

                case '*':
                    s.push(a * b);
                    break;

                case '/':
                    s.push(a / b);
                    break;
                }

            } else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};