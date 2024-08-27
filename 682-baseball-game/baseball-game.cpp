#include <vector>
#include <stack>
#include <string>

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::stack<int> s;
        int sum = 0;

        for (const std::string& op : operations) {
            if (op == "C") {
                if (!s.empty()) {
                    sum -= s.top();
                    s.pop();
                }
            } else if (op == "D") {
                if (!s.empty()) {
                    int doubleLast = s.top() * 2;
                    sum += doubleLast;
                    s.push(doubleLast);
                }
            } else if (op == "+") {
                if (s.size() >= 2) {
                    int top1 = s.top(); s.pop();
                    int top2 = s.top();
                    s.push(top1); 
                    int sumOfLastTwo = top1 + top2;
                    sum += sumOfLastTwo;
                    s.push(sumOfLastTwo);
                }
            } else {
                int score = std::stoi(op);
                sum += score;
                s.push(score);
            }
        }

        return sum;
    }
};
