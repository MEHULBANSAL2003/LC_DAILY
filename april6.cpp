#include <bits/stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s) {
        int leftCount = 0;
        int rightCount = 0;
        stack<char> stack;

        for (char ch : s) {
            if (ch == '(') {
                leftCount++;
            } else if (ch == ')') {
                rightCount++;
            }
            if (rightCount > leftCount) {
                rightCount--;
                continue;
            } else {
                stack.push(ch);
            }
        }

        string result = "";

        while (!stack.empty()) {
            char currentChar = stack.top();
            stack.pop();
            if (leftCount > rightCount && currentChar == '(') {
                leftCount--;
            } else {
                result += currentChar;
            }
        }

        std::reverse(result.begin(), result.end());
        return result;
    }

int main(){

string s;
cin>>s;

string ans=minRemoveToMakeValid(s);
cout<<ans<<endl;


}