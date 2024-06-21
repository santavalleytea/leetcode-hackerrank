class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for (const auto& op : operations) {
            if (op == "C") {
                stack.pop();
            } else if (op == "D") {
                stack.push(2 * stack.top());
            } else if (op == "+") {
                int top1 = stack.top();
                stack.pop();
                int top2 = stack.top();
                stack.push(top1); // Push the top element back
                stack.push(top1 + top2);
            } else {
                stack.push(stoi(op));
            }
        }

        int sum = 0;
        while(!stack.empty()) {
            sum += stack.top();
            stack.pop();
        }

        return sum;
    }
};
