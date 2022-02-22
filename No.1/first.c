#include <stdio.h>//这个命令就是会告诉预处理器(cpp)去读系统头文件stdio.h中的内容, and then把它插入到程序作为文本-->first.i
#include <string.h>

// int main()//main是一个函数名//int表示的是main函数返回一个整数
// {
//     int num = 18;//表示将会使用一个名为 num 的变量, 而且 num 是 int整数类型
//     printf("Hello, World!\n");
//     printf("number = %d\n", num);// %d(its a语法) 表示:使用整型输出字符串

//     return 0;//表示:程序的结束
// }


/* 数据类型：
    char: 声明字符型变量或函数
    double: 声明双精度变量或函数
    float: 声明浮点型变量或函数
    int : 声明整型变量或函数
    long: 声明长整型变量或函数
    short : 声明短整型变量或函数
    signed : 声明有符号类型变量或函数
    _Bool:  声明布尔类型
    _Complex ：声明复数
    _Imaginary: 声明虚数
    unsigned : 声明无符号类型变量或函数
    void : 声明函数无返回值或无参数，声明无类型指针
*/


/* 控制语句：

    -循环语句

for : for 循环，使用的最多
do ：循环语句的前提条件循环体
while：循环语句的循环条件
break : 跳出当前循环
continue：结束当前循环，开始下一轮循环

    -条件语句

//if：条件语句的判断条件
int main()
{
    // int age = 10;
    // if(age < 18)//(不加 ; )
    //     printf("未成年\n");//(condition)
    // else 
    //     printf("成年\n");
    // if(age < 18)
    // {//这里一对 {} 就是一个代码块
    //     printf("未成年\n");
    //     printf("不能谈恋爱\n");
    // }
    //     else if(age>=18 && age<28)
    //         printf("青年\n");
    //     else if(age>=28 && age<50)
    //         printf("壮年\n");
    //     else if(age>=50 && age<90)
    //         printf("老年\n");
    //     else 
    //         printf("老不死\n");

    // int num = 5;
    // if( 5 == num)//(好的代码风格,也避免写出bug -> 把常量放在==左边)
    // {
    //     printf("呵呵\n");
    // }

    // int i = 1;
    // while (i<=100)
    // {
    //     if(i%2 == 1)// %:取模(取模運算是求兩個數相除的餘數)
    //         printf("%d ", i);
    //     i++;
    // }
    return 0;
}
*/

// else : 条件语句的否定分支，与最近的 未匹配的 if 作匹配(就近原则)
// goto: 无条件跳转语句

//     -开关语句

// switch: 用于开关语句
int main()
{
    int day = 0;
    scanf("%d", &day);//&:取地址//test:3
    switch(day)
    {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期七\n");
            break;

    }
}



// case：开关语句的另外一种分支
// default : 开关语句中的其他分支

//     -返回语句
// return ：子程序返回语句（可以带参数，也看不带参数） 


/* 存储类型:
auto : 声明自动变量 一般不使用
extern : 声明变量是在其他文件正声明（也可以看做是引用变量）
register : 声明寄存器变量
static: 声明静态变量 
*/


/* 其他关键字
const: 声明只读变量
sizeof : 计算数据类型长度
typedef: 用以给数据类型取别名
volatile : 说明变量在程序执行中可被隐含地改变
 */


//分支语句和循环语句(由;隔开的就是语句):
