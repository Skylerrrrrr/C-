#include <stdio.h>//���������ǻ����Ԥ������(cpp)ȥ��ϵͳͷ�ļ�stdio.h�е�����, and then�������뵽������Ϊ�ı�-->first.i
#include <string.h>

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
        printf("hehe\n");//һֱ��ӡhehe
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

int main()
{
    
    for(i=1;;)
}
