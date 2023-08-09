#ifndef RPN_H
#define RPN_H

#include <string>
#include <stack>
#include <iostream>

class RPN
{
    private:
        struct{
            int first;
            int secend;
        }operand;
        int resault;
        std::stack<int> Stack;
    public:
        RPN();
        RPN(std::string rpn);
        RPN(const RPN &src);
        ~RPN();
        RPN & operator=(const RPN &src);
        bool operatorIsValid(char Operator);
        void checkRpn(std::string &rpn, int index);

};
#endif
