#include <stdio.h>//���������ǻ����Ԥ������(cpp)ȥ��ϵͳͷ�ļ�stdio.h�е�����, and then�������뵽������Ϊ�ı�-->first.i
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// int main()//main��һ��������//int��ʾ����main��������һ������
// {
//     int num = 18;//��ʾ����ʹ��һ����Ϊ num �ı���, ���� num �� int��������
//     printf("Hello, World!\n");
//     printf("number = %d\n", num);// %d(its a�﷨) ��ʾ:ʹ����������ַ���

//     return 0;//��ʾ:����Ľ���
// }


/* �������ͣ�
    char: �����ַ��ͱ�������
    double: ����˫���ȱ�������
    float: ���������ͱ�������
    int : �������ͱ�������
    long: ���������ͱ�������
    short : ���������ͱ�������
    signed : �����з������ͱ�������
    _Bool:  ������������
    _Complex ����������
    _Imaginary: ��������
    unsigned : �����޷������ͱ�������
    void : ���������޷���ֵ���޲���������������ָ��
*/


/* ������䣺

    -ѭ�����

for : for ѭ����ʹ�õ���� 
    for(��ʼ������; �����жϲ���; ��������)
        ѭ�����;
int main()
{
    int i = 0;
    for(i=1; i<=10; i++)
    {
        if(i == 5)
            continue;
        printf("%d", i);//��ӡ���:1234678910(û 5)
    }
    return 0;
}
//forѭ���ı���:
int main()
{
    for(;;)//forѭ���ĳ�ʼ�����������ж� ����ʡ�ԣ�but �жϲ������ʡ�ԣ����ж��������ǣ���Ϊ��
    {
        printf("�Ǻ�\n");//һֱ��ӡ�Ǻ�
    }
return 0;
}
do ��ѭ������ǰ������ѭ����
while��ѭ������ѭ������

do...while:����do ��ѭ��
int main()
{
    int i = 1;
    //1~10
    do//������ do ��������
    {
        printf("%d ", i);
        i++;
    }
    while (i<=10);//����Ҫ�� ;//��������������<=10 �ͻص�ͷ(its a ѭ��)
    return 0;
}

break : ������ǰѭ��
continue��������ǰѭ������ʼ��һ��ѭ��(�ص���ͷ)

    -�������

//if�����������ж�����
int main()
{
    // int age = 10;
    // if(age < 18)//(���� ; )
    //     printf("δ����\n");//(condition)
    // else 
    //     printf("����\n");
    // if(age < 18)
    // {//����һ�� {} ����һ�������
    //     printf("δ����\n");
    //     printf("����̸����\n");
    // }
    //     else if(age>=18 && age<28)
    //         printf("����\n");
    //     else if(age>=28 && age<50)
    //         printf("׳��\n");
    //     else if(age>=50 && age<90)
    //         printf("����\n");
    //     else 
    //         printf("�ϲ���\n");

    // int num = 5;
    // if( 5 == num)//(�õĴ�����,Ҳ����д��bug -> �ѳ�������==���)
    // {
    //     printf("�Ǻ�\n");
    // }

    // int i = 1;
    // while (i<=100)
    // {
    //     if(i%2 == 1)// %:ȡģ(ȡģ�\������ɂ���������N��)
    //         printf("%d ", i);
    //     i++;
    // }
    return 0;
}
*/

// else : �������ķ񶨷�֧��������� δƥ��� if ��ƥ��(�ͽ�ԭ��)
// goto: ��������ת���

//     -�������

// switch: ���ڿ������
// int main()
// {
//     int day = 0;
//     scanf("%d", &day);//&:ȡ��ַ//test:3
//     switch(day)
//     {
//         case 1:
//             printf("����һ\n");
//             break;
//         case 2:
//             printf("���ڶ�\n");
//             break;
//         case 3:
//             printf("������\n");
//             break;
//         case 4:
//             printf("������\n");
//             break;
//         case 5:
//             printf("������\n");
//             break;
//         case 6:
//             printf("������\n");
//             break;
//         case 7:
//             printf("������\n");
//             break;

//     }
// }



// case��������������һ�ַ�֧
// default : ��������е�������֧(���Ķ���,��һ��switch�����,ֻ�ܳ���һ��default)

//     -�������
// return ���ӳ��򷵻���䣨���Դ�������Ҳ������������ 


/* �洢����:
auto : �����Զ����� һ�㲻ʹ��
extern : �����������������ļ���������Ҳ���Կ��������ñ�����
register : �����Ĵ�������
static: ������̬���� 
*/


/* �����ؼ���
const: ����ֻ������
sizeof : �����������ͳ���
typedef: ���Ը���������ȡ����
volatile : ˵�������ڳ���ִ���пɱ������ظı�
 */


/*����:
i+=m -> i = i+m


 */

//��֧����ѭ�����(��;�����ľ������):


/* int main()
{
    int get = 0;
    int ch = 0;
    char password[20] = {0};
    printf("����������:>");
    scanf("%s", password);//%s(��ӡ����Ϊ�ַ���)//��������,�������password������
    //now:��������ʣһ��(\n)- �����������Ļس���(ȷ�������Ż�س�)
    //so we can:��ȡһ��(\n)
    while((ch = getchar()) != '\n')// !=:�жϵ���
    {
        ;//�����(don't hv to do anything)
    }
    printf("��ȷ������(Y/N):>");
    get = getchar();//Y/N
    if(get == 'Y')
    {
        printf("ȷ�ϳɹ�\n");
    }
    else 
    {
        printf("�ѷ���ȷ��\n");
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

/* �󼸸��׳˵ĺ�:

int main()
{
    int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//��������������
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

�Ż���:
int main()
{
    //int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//��������������
    int sum = 0;
    for(n=1; n<=10; n++)
    {
        Ans = Ans*n;
        sum+=Ans;
    }

    printf("sum = %d\n", sum);
    return 0;
} */


/* дһ������:��arr����(�����)���ҵ� 7
//�۰�����㷨/���ֲ����㷨
//       1 2 3 4 5 6 7 8 9 10
// �±�: 0 1 2 3 4 5 6 7 8  9 //���±���,��Ϊ����һֱ˳��ȥ��
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;//����7��λ��
    int sz = sizeof(arr)/sizeof(arr[0]);//��Ԫ�ظ���
    int left = 0;//���±�
    int right = sz-1;//���±�(Ԫ�ظ�����һ)
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
            printf("�ҵ���,�±���: %d\n", mid);
            break;//��Ϊ�ҵ��˾Ͳ����ټ�������
        }
   }
    if(left>right)
    {
        printf("�Ҳ���\n");
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
    //int right = sizeof(arr1)/sizeof(arr1[0])-2//�����Ǽ�2(��\0�ļ���)
    //char arr[] = "abc";
    //[a  b  c \0]//����ոյ����鲻һ��, �����ַ�, ҪС��!
    // 0  1  2  3//�±�
    //OR:
    int right = strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        //ÿ��ӡһ�� ��Ϣһ��:
        Sleep(1000);//1000ms = 1s //Sleep Ҫ��д!
        system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ
        left++;
        right--;
    }
    printf("%s\n", arr2);
    return 0;

} */


/* //ģ���û���¼�龰,ֻ�ܵ�������(if ���ζ�����,then�Ƴ�����, if������ȷ����ʾ��½�ɹ�)
int main()
{
    int i = 0;
    char password[20] = {0};

    for(i=0; i<3; i++)//���� i<=3 ��Ϊ���εĻ� �ǲ��ܼ�������ѭ����
    {
        printf("����������:>");
        scanf("%s", password);
        if (strcmp(password, "123456")==0)// == ������������Ƚ������ַ����Ƿ����(��ȷ���������������), Ӧ����һ���⺯��: strcmp
        {
            printf("����ɹ�\n");
            break;
        }
        else
        {
            printf("�������\n");
        }
    }
    if(i==3)
    {
        printf("�������������,�˳�����");
    }
    return 0;
} */


/* //��ݔ���������������(�Ӵ�С)
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);//�����ʱ��ҲҪ�ӿո�
    //��a��������
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


/* //��ӡ1~100�����ı���:
int main()
{
    int i = 0;
    for(i = 0; i<=100; i++)
    {
        if(i%3 == 0)//��3����:1~100�����ı���
        {
            printf("%d\n", i);
        }
    }
    return 0;
} */

/* //�������������Լ��
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

/* //��ӡ1000~2000�������(�c����ָԓ����366��)
        // int main()
        // {
        //     int year = 0;
        //     int count = 0;//�����ж��ٸ�
        //     for(year = 1000; year <= 2000; year ++)
        //     {
        //         //�ж�year�ǲ�������
        //         //1.�ܱ�4���� ���Ҳ��ܱ�100����   or: �ܱ�400����
        //         if(year%4 == 0 && year%100 != 0)// != : ������
        //         {
        //             printf("%d��\n", year);
        //             count++;
        //         }
        //         else if(year%400 == 0)
        //         {
        //             printf("%d��\n", year);
        //             count++;
        //         }
        //     }
        //     printf("\ncount = ��%d��\n", count);
        //     return 0;
        // }
//OR����̵�:
 int main()
{
    int year = 0;
    int count = 0;//�����ж��ٸ�
    for(year = 1000; year <= 2000; year ++)
    {
        if(((year%4==0) && (year%100 !=0)) || (year%400 == 0))// ||:����
        {
            printf("%d��\n", year);
            count++;
        }
    }
        printf("\ncount = ��%d��\n", count);
        return 0;
} */

/* //��ӡ100~200֮�������/����:
int main()
{
    int i = 0;
    int count = 0;
    for(i=100; i<=200; i++)
    {
        int j = 0;
        for(j=2; j<=sqrt(i); j++)//sqrt - ��ƽ������ѧ�⺯��
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
    printf("\ncount = %d��\n", count);
    return 0;
} */

/* //��1~100�����������г��ֶ��ٸ�9:
int main()
{
    int i = 0;
    int count = 0;
    for(i=1; i<=100; i++)
    {
        if(i%10 == 9)//��λ��9
            count++;
        if(i/10 == 9)//ʮλ��9
            count++;
    }
    printf("count = %d\n", count);
    return 0;
} */

/* //����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ,��ӡ�����:
int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i=1; i<=100; i++)
    {
        sum += flag * 1.0/i;
        flag = -flag;//��������

    }
    printf("sum = %lf\n", sum);
    return 0;
} */

/* //��10�������е����ֵ:(Ҳ�ǿ��±�ĸ�����,�ڲ�����ķ�����)
int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    //int max = 0;//��ʾ:���ֵ�� 0
    int max = arr[0];//��ʾ:���ֵΪ��һ����
    int i = 0;//�±�
    int sz = sizeof(arr)/sizeof(arr[0]);//��Ԫ�ظ���
    for(i=1; i<sz; i++)
    {
        if(arr[i]>max)//�±��Ӧ��ֵ����max
        {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
} */

/* //����Ļ�����9*9�˷��ھ���:
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
// ...
int main()
{
    int i = 0;
    //ȷ����ӡ9��:
    for(i=1; i<=9; i++)
    {
        //ÿһ�е�����:
        int j = 1;
        for(j=1; j<=i; j++)
        {
            printf("%d*%d = %-2d\t",  i, j, i*j);
        }
    }
    return 0;
} */




/* //��������Ϸ:
//1.���Ի�����һ�������
//2.������
void menu()
{
    printf("*****************************\n");
    printf("****   1.PLAY   0.EXIT   ****\n");
    printf("*****************************\n");
}

void game()
{
    //1.����һ�������
    int ret = 0;
    int guess = 0;//���ղµ�����

    //��ʱ����������������������ʼ��//time_t time(time_t *timer)
    //ret = rand();//RAND_MAX - ����0~32767֮�������//required header:<stdlib.h>
    ret = rand()%100+1;  //����1~100֮�� �����!!
    //printf("%d\n", ret);//�����ܲ��ܳ������
    //2.������
    while(1)// 1Ϊ�� ����ѭ��
    {
        printf("�������:>");
        scanf("%d\n", &guess);
        if(guess>ret)//ret�������
        {
            printf("�´���\n");
        }
        else if(guess<ret)
        {
            printf("��С��\n");
        }
        else
        {
            printf("��ϲ��!�¶���\n");
            break;
        }
    }
}

int main()
{
    //do...whileѭ��(���ٽ�ȥһ��// do������: for starting the game)
    int input = 0;
    srand((unsigned int)time(NULL));//��ʼ�������������, use it before calling [rand()]//��Ȼÿ�����ɵ����ֶ���һ����
    //                     //NULL:��ָ��

    do 
    {
       menu();//һ������
       printf("��ѡ��:> ");
       scanf("%d", &input);//�ǵ�input�����²���Ҫȡ��ַ(&)
       switch(input)//input���²����ĸ���cases
       {
           case 1://input �� 1
                game();//(��ǰѡ��1 -> ����Ϸ)//һ������
                break;
           case 0:
                printf("�˳���Ϸ\n");
                break;
           default://����1/0
                printf("ѡ�����\n");
                break;
       }
    }while (input);
  
    return 0;
} */


/* //�ػ�����:
int main()
{
    char input[20] = {0};

    system("shutdown -s -t 60");//"shoutdown -s -t 60"�ػ�ָ��//system() - ִ��ϵͳ����
 again:
    printf("��ע��,��ĵ��Խ���һ�����ڹػ�,������:����˧,��ȡ���ػ�\n������:>");
    scanf("%s", input);
    if(strcmp(input, "����˧") == 0)//������������
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
} */














//����:
//1.�⺯��
//2.�Զ��庯��

/* //memset(�ڴ�����)
int main()
{
    char arr[] = "hello world";
    memset(arr, '*', 5);//destination ; Ҫ�ĳɵĶ���; (first)no. of bytes
    printf("%s\n", arr);//��ӡ���:***** world
    return 0;
} */

/* //Swap(����):

//����д���ǲ��е�,��Ϊ xy ab�ĵ�ַ��һ�� swap Ҳֻ�� swap��xy instead of ab
//
//��ʵ��(ab)�����β�(xy)��ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���Զ��β�(xy)���޸��ǲ���ı�ʵ��(ab)��
//
void Swap(int x, int y)//������Ҫ����ֵ��ʱ����� void(�յ�)
{
    int tmp = 0;
    tmp = x;
    x = y;//a����b
    y = tmp;//b����tmp �� tmp�Ѿ���a
}

//����ȡ��ַ��д������
void Swap2(int* pa, int* pb)
{
    int tmp = 0;
    tmp = *pa ;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d  b=%d\n", a, b);
    //Swap(a, b);//����Swap����(its an example of ��ֵ����)
    Swap2(&a, &b);//����Swap2����(its an example of ��ַ����)
    printf("a=%d  b=%d\n", a, b);
    return 0;
//swap��ӡ���: a=10  b=20  
//             a=10  b=20
//swap2��ӡ���:a=10  b=20
//             a=20  b=10
}

//Correction: Swap2()
// int main()
// {
//     int a = 10;
//     int* pa = &a;// pa:ָ����� int* ��Ӧ &
//     *pa = 20;//�����ò���
//     printf("%d\n", a);
//     int b = 20;
//     return 0;
// } */

/* //�ú����ķ�����ӡ100~200֮������� vs. ��480��
int is_prime(int n)
{
    int j = 0;
    for(j=2; j<n; j++)
    {
        if(n%j==0)
        return 0;
    }

    return 1;//j����������˼
}
int main()
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        if(is_prime(i)==1)//�ж�i�ǲ�������
        printf("%d\n", i);
    }
    return 0;
} */

/* //�ú����ķ�����ӡ1000~2000�������(leap year) vs 440
int is_leap_year(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    else 
        return 0;
}
int main()
{
    int year = 0;
    for(year=1000; year<=2000; year++)
    {
        if(1 == is_leap_year(year))
        {
            printf("%d\n",year);
        }
    }

    return 0;
} */

/* //�ú����ķ��� ��һ�����������ض�����:if�ҵ��˾ͷ�����������±�,if�Ҳ��� �ͷ���-1
int binary_search(int arr[], int k, int sz)
{
        int left = 0;//���±�
        int right = sz-1;//���±�
        
    while(left<=right)
    {
        int mid = (left+right)/2;//�м�Ԫ�ص��±�(ÿ�ζ���һ��,����Ҫ����ѭ����)
        if(arr[mid]<k)//arr[mid]��ָ:�м����Ԫ��
        {
            left = mid+1;
        }
        else if(arr[mid]>k)
        {
            right = mid-1;
        }
        else
        {
            return mid;//��������±�(�ҵ���)
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;//Ҫ�� 7
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    int ret = binary_search(arr, k, sz);
    if(ret==-1)
    {
        printf("�Ҳ���������\n");
    }
    else
    {
        printf("�ҵ���,�±���: %d\n", ret);
    }
    return 0;
}
 */
 
