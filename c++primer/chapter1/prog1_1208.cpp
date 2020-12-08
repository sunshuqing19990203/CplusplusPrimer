
#include <iostream>
int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    // 输出运算符 << 的含义：接受两个运算对象，其中左侧的运算对象必须是一个ostream类型，右侧是打印的值
    // endl: 操纵符，效果是结束当前行，并将与设备关联的缓冲区中的内容刷到设备中。
    // std前缀指出了名字cout和endl是定义在名为std的namespace（帮助我们避免不经意的名字定义冲突以及使用库中相同名字导致的冲突）中的，
    // 标准库定义的所有名字都在命名空间std中。
    // 作用域运算符::
    std::cout << "The sum of " << v1 << " " << "and" << " " << v2 << " " << "is" << " " << v1+v2 << std::endl;
    std::cout << "Hello, world! " << std::endl;
    return 0;
}
/* 一个函数的定义包含四部分：返回类型，函数名，形参列表，函数体 
 * IDE：集成开发环境 Integrated Developed Environment 
 * 编译程序：GNU编译： g++ -o prog1 prog1.cc
 * 运行程序 ./a.out
 * 返回值 echo $? (UNIX), echo %ERRORLEVEL% (Windows) 
 * 标准库standard library来定义基本的输入输出IO：iostream：istream和ostream
 * * 1.标准库定义了4个IO对象：标准输入cin（类型为istream），cout，cerr（ostream，输出警告和错误信息），clog（也对应错误警告，程序运行信息）
 * 
*/