//1208 孙书情
//读取数量不定的输入数据
//windows Ctrl+Z return 输入结束， unix/Mac中 Ctrl+D return

#include <iostream>
int main(){
    int sum = 0, value = 0;
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "Sum is: " << sum << ".  value is: " << value << std::endl;
    return 0;
}