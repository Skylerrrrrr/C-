#include <stdio.h>//这个命令就是会告诉预处理器(cpp)去读系统头文件stdio.h中的内容, and then把它插入到程序作为文本-->first.i
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

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
    for(初始化部分; 条件判断部分; 调整部分)
        循环语句;
int main()
{
    int i = 0;
    for(i=1; i<=10; i++)
    {
        if(i == 5)
            continue;
        printf("%d", i);//打印结果:1234678910(没 5)
    }
    return 0;
}
//for循环的变种:
int main()
{
    for(;;)//for循环的初始化、调整、判断 都可省略，but 判断部分如果省略，那判断条件就是：恒为正
    {
        printf("呵呵\n");//一直打印呵呵
    }
return 0;
}
do ：循环语句的前提条件循环体
while：循环语句的循环条件

do...while:先做do 后循环
int main()
{
    int i = 1;
    //1~10
    do//先做了 do 里面的语句
    {
        printf("%d ", i);
        i++;
    }
    while (i<=10);//这里要加 ;//上面下来的数据<=10 就回到头(its a 循环)
    return 0;
}

break : 跳出当前循环
continue：结束当前循环，开始下一轮循环(回到开头)

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
// int main()
// {
//     int day = 0;
//     scanf("%d", &day);//&:取地址//test:3
//     switch(day)
//     {
//         case 1:
//             printf("星期一\n");
//             break;
//         case 2:
//             printf("星期二\n");
//             break;
//         case 3:
//             printf("星期三\n");
//             break;
//         case 4:
//             printf("星期四\n");
//             break;
//         case 5:
//             printf("星期五\n");
//             break;
//         case 6:
//             printf("星期六\n");
//             break;
//         case 7:
//             printf("星期七\n");
//             break;

//     }
// }



// case：开关语句的另外一种分支
// default : 开关语句中的其他分支(放哪都行,但一个switch语句内,只能出现一条default)

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


/*符号:
i+=m -> i = i+m


 */

//分支语句和循环语句(由;隔开的就是语句):


/* int main()
{
    int get = 0;
    int ch = 0;
    char password[20] = {0};
    printf("请输入密码:>");
    scanf("%s", password);//%s(打印类型为字符串)//输入密码,并存放在password数组中
    //now:缓冲区还剩一个(\n)- 输入完密码后的回车键(确认输完后才会回车)
    //so we can:读取一下(\n)
    while((ch = getchar()) != '\n')// !=:判断等于
    {
        ;//空语句(don't hv to do anything)
    }
    printf("请确认密码(Y/N):>");
    get = getchar();//Y/N
    if(get == 'Y')
    {
        printf("确认成功\n");
    }
    else 
    {
        printf("已放弃确认\n");
    }
    return 0;
} */

/* int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch<'0' || ch>'9')// || : OR
            continue;
        putchar(ch);
    }
    return 0;
} */

/* 求几个阶乘的和:

int main()
{
    int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//不考虑溢出的情况
    int sum = 0;
    for(n=1; n<=3; n++)
    {
        Ans = 1;
    
        for(i=1; i<=n; i++)
        {
            Ans = Ans*i;
        }
        sum+=Ans;
    }

    printf("sum = %d\n", sum);
    return 0;
}

优化后:
int main()
{
    //int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//不考虑溢出的情况
    int sum = 0;
    for(n=1; n<=10; n++)
    {
        Ans = Ans*n;
        sum+=Ans;
    }

    printf("sum = %d\n", sum);
    return 0;
} */


/* 写一个代码:在arr数组(有序的)中找到 7
//折半查找算法/二分查找算法
//       1 2 3 4 5 6 7 8 9 10
// 下标: 0 1 2 3 4 5 6 7 8  9 //靠下标找,因为这是一直顺下去的
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;//想找7的位置
    int sz = sizeof(arr)/sizeof(arr[0]);//求元素个数
    int left = 0;//左下标
    int right = sz-1;//右下标(元素个数减一)
   while(left <= right)
   {
    int mid = (right+left)/2;
            if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            printf("找到了,下标是: %d\n", mid);
            break;//因为找到了就不用再继续找了
        }
   }
    if(left>right)
    {
        printf("找不到\n");
    }
    return 0;
} */


/* int main()
{
    //
    //welcome to bit!!!!!!
    //####################
    //w##################!
    //we################!!
    //wel##############!!!
    //...
    //welcome to bit!!!!!!
    //
    
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    //int right = sizeof(arr1)/sizeof(arr1[0])-2//所以是减2(把\0的减了)
    //char arr[] = "abc";
    //[a  b  c \0]//这跟刚刚的数组不一样, 这是字符, 要小心!
    // 0  1  2  3//下标
    //OR:
    int right = strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        //每打印一次 休息一秒:
        Sleep(1000);//1000ms = 1s //Sleep 要大写!
        system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
        left++;
        right--;
    }
    printf("%s\n", arr2);
    return 0;

} */


/* //模拟用户登录情景,只能登入三次(if 三次都错了,then推出程序, if密码正确就显示登陆成功)
int main()
{
    int i = 0;
    char password[20] = {0};

    for(i=0; i<3; i++)//不是 i<=3 因为三次的话 是不能继续进行循环了
    {
        printf("请输入密码:>");
        scanf("%s", password);
        if (strcmp(password, "123456")==0)// == 这个不能用来比较两个字符串是否相等(正确密码与输入的密码), 应该用一个库函数: strcmp
        {
            printf("登入成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if(i==3)
    {
        printf("三次密码均错误,退出程序");
    }
    return 0;
} */


/* //把輸入的三个数字排序(从大到小)
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);//输入的时候也要加空格
    //把a存最大的数
    if(a<b)
    {
       int temp = a;
       a = b;
       b = temp;
    }
    if(a<c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if(b<c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d%d%d\n", a, b, c);
    return 0;
} */


/* //打印1~100的三的倍数:
int main()
{
    int i = 0;
    for(i = 0; i<=100; i++)
    {
        if(i%3 == 0)//被3整除:1~100的三的倍数
        {
            printf("%d\n", i);
        }
    }
    return 0;
} */

/* //求两个数的最大公约数
int main()
{
    int m = 0;
    int n = 0;
    int r = 0;
    scanf("%d %d", &m, &n);
    while(m%n)
    {
        r = m%n;
        //m = n;
        n = r;
    }
    printf("%d\n", n);
    return 0;
} */

/* //打印1000~2000年的闰年(閏年是指該年有366日)
        // int main()
        // {
        //     int year = 0;
        //     int count = 0;//计算有多少个
        //     for(year = 1000; year <= 2000; year ++)
        //     {
        //         //判断year是不是闰年
        //         //1.能被4整除 并且不能被100整除   or: 能被400整除
        //         if(year%4 == 0 && year%100 != 0)// != : 不等于
        //         {
        //             printf("%d年\n", year);
        //             count++;
        //         }
        //         else if(year%400 == 0)
        //         {
        //             printf("%d年\n", year);
        //             count++;
        //         }
        //     }
        //     printf("\ncount = 有%d个\n", count);
        //     return 0;
        // }
//OR更简短的:
 int main()
{
    int year = 0;
    int count = 0;//计算有多少个
    for(year = 1000; year <= 2000; year ++)
    {
        if(((year%4==0) && (year%100 !=0)) || (year%400 == 0))// ||:或者
        {
            printf("%d年\n", year);
            count++;
        }
    }
        printf("\ncount = 有%d个\n", count);
        return 0;
} */

/* //打印100~200之间的素数/质数:
int main()
{
    int i = 0;
    int count = 0;
    for(i=100; i<=200; i++)
    {
        int j = 0;
        for(j=2; j<=sqrt(i); j++)//sqrt - 开平方的数学库函数
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d\n", i);
        }
    }
    printf("\ncount = %d个\n", count);
    return 0;
} */

/* //数1~100的所有整数中出现多少个9:
int main()
{
    int i = 0;
    int count = 0;
    for(i=1; i<=100; i++)
    {
        if(i%10 == 9)//个位是9
            count++;
        if(i/10 == 9)//十位是9
            count++;
    }
    printf("count = %d\n", count);
    return 0;
} */

/* //计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值,打印出结果:
int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i=1; i<=100; i++)
    {
        sum += flag * 1.0/i;
        flag = -flag;//负负得正

    }
    printf("sum = %lf\n", sum);
    return 0;
} */

//求10个整数中的最大值:(也是靠下标找,在不排序的方法下)
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = 0;//最大值

    return 0;
}