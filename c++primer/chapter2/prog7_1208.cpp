// 1208 孙书情
// 作用域操作符

#include <iostream>
int item_global = 40;
int main(){
    int local = 10;
    std::cout << "item = " << item_global << std::endl;
    std::cout << "local= " << local << std::endl;
    int item_local = 20;
    std::cout <<"item = " << item_local << std::endl;
    std::cout << "local = " << local << std::endl;
    // 作用域操作符
    std::cout << "使用了作用域操作符：之后" << std::endl;
    std::cout << "item = " << ::item_global << std::endl;

    return 0;

}