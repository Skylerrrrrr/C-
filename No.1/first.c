#include <stdio.h>//���������ǻ����Ԥ������(cpp)ȥ��ϵͳͷ�ļ�stdio.h�е�����, and then�������뵽������Ϊ�ı�-->first.i
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

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

//��10�������е����ֵ:(Ҳ�ǿ��±���,�ڲ�����ķ�����)
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = 0;//���ֵ

    return 0;
}