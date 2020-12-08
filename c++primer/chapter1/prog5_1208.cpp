// 1208 孙书情

// 1.
/* 编译器可以检查错误
 * 语法错误（syntax error): 忘记; ""等
 * 类型错误（type error): 将string赋值给int变量
 * 声明错误（declaration error）:先声明后使用，对来自标准库的名字忘记使用std::
*/

//2.
//if 语句

// 统计输入的的每个值分别输入了几次，相同的值连续输入
// input: 
// 12 12 12 3 4 4 5 
// ctrl Z
// output:
// 12 occurs 3 times
// 3 occurs 1 times
// 4 occurs 2 times
// 5 occurs 1 times
// over
#include <iostream>
int main(){
    // currVal 是正在统计的数；我们将读入的新值存入val
    int currVal = 0, val = 0;
    // 读取第一个数，并确保确实有数据可以处理
    if (std::cin >> currVal){
        int cnt = 1;    //  保存我们正在处理的当前值的个数
        while (std::cin >> val){    // 新输入一个值
            if (val == currVal)     // 新输入的值与前一个值相同时，次数加一
                ++cnt;
            else {
                // 否则 打印出来当前个数，重新开始进行循环判断
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        // while循环结束后还需要打印出来最后记录的值
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        std::cout << "over" << std::endl;
    }


    return 0;
}
