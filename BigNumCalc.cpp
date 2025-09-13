#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString){
    std::list<int> num;
    int len = numString.length();

    for (int i = 0; i < len; i++){
        if (numString[i] == '-'){
            num.push_back(-(numString[1] - '0'));
            i = 1;
        } else {
            num.push_back(numString[i] - '0');
        }
    }

    return num;
}


std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2){
    auto n1 = num1.rbegin();
    auto n2 = num2.rbegin();
    std::list<int> ans;
    int carry = 0;

    while ((n1 != num1.rend()) || (n2 != num2.rend())){
        int i = carry;

        if (n1 != num1.rend()){
            i = i + *n1;
            n1++;
        }

        if (n2 != num2.rend()){
            i = i + *n2;
            n2++;
        }

        ans.push_front(i % 10);
        carry = i / 10;
    }

    while(carry >= 1){
        ans.push_front(carry % 10);
        carry = carry / 10;
    }

    return ans;
}


std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2){
    auto n1 = num1.rbegin();
    auto n2 = num2.rbegin();
    std::list<int> ans;
    int carry = 0;

    while ((n1 != num1.rend()) || (n2 != num2.rend())){
        int i = 0;

        if (n1 != num1.rend()){
            i = i + *n1;
            n1++;
            i = i - carry;
            carry = 0;
        }

        if (n2 != num2.rend()){
            i = i - *n2;
            n2++;
        }

        if (i < 0){
            carry = 1;
            i = i + 10;
        } 

        ans.push_front(i);
    }

    while(!ans.empty() && (ans.front() == 0)){
        ans.pop_front();
    }

    return ans;
}


std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2){
    auto n1 = num1.rbegin();
    std::list<int> ans;
    int mul = *num2.begin();
    int carry = 0;

    while (n1 != num1.rend()) {
        int i = (*n1 * mul) + carry;
        ans.push_back(i % 10);
        carry = i / 10;
        n1++;
    }

    while (carry > 0) {
        ans.push_front(carry % 10);
        carry = carry / 10;
    }

    return ans;
}