#ifndef RPN_H
#define RPN_H

#include <string>
#include <stack>
#include <iostream>

class RPN
{
    private:
        struct{
            double first;
            double secend;
        }operand;
        double resault;
        std::stack<double> Stack;
    public:
        RPN();
        RPN(std::string rpn);
        RPN(const RPN &src);
        RPN & operator=(const RPN &src);
        ~RPN();
        bool operatorIsValid(char Operator);
        void checkRpn(std::string &rpn, int index);

};
#endif
