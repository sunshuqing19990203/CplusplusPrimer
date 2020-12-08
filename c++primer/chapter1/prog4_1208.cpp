// 1208 孙书情
// 类简介 class
// 成员函数：item.isbn()
#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    // if (book.units_sold == 4){
    //     std::cerr << "A test! book.units = 4" << std::endl;
    //     return -1;
    // }
    return 0;
}


// input:ISBN 售出的册数，销售价格
// 0-201-70353-X 4 24.99
// output:ISBN，售出的册数，总销售额，平均价格
// 0-201-70353-X   4       99.96   24.99