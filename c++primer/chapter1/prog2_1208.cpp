// 1208 孙书情
// while语句：
// for 语句


#include <iostream>

int main(){
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    sum = 0;
    for (val = 1; val <= 10; ++val){
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}