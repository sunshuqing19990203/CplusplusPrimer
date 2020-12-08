// 1208 孙书情
// 负数的补码问题，位运算，16进制，8进制打印
#include <iostream>
#include <iomanip>
#include <bitset>
#include <math.h>
int main(){
    unsigned u = 10;
    int i = -42;
    std::cout << u + i << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << "(hex) 4294967254 = " << std::hex << 4294967254 << std::endl;
    // 有符号数的4*8位的-10转换为无符号数结果是
    // std::cout << " i + pow (2, 4*8) = ";
    // std::cout << std::setw(12) << std::setfill('0') << i + pow (2, 4*8) <<std::endl;

    // 求补 = 按位取反 + 1
    // 
    int tmp = 0xffffffff;
    // std::cout << "tmp = " << tmp << std::endl;
    std::cout << std::dec << (i ^ tmp) + 1 << std::endl;


    // 八进制赋值与打印
    int myoct = 020;
    std::cout << " oct: ";
    std::cout << std::oct << myoct << std::endl;
    std::cout << " dec: " << std::dec << myoct << std::endl;
    std::cout << " hex: " << std::hex << myoct << std::endl;


    return 0;
}