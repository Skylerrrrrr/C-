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
do ��ѭ������ǰ������ѭ����
while��ѭ������ѭ������
break : ������ǰѭ��
continue��������ǰѭ������ʼ��һ��ѭ��

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
int main()
{
    int day = 0;
    scanf("%d", &day);//&:ȡ��ַ//test:3
    switch(day)
    {
        case 1:
            printf("����һ\n");
            break;
        case 2:
            printf("���ڶ�\n");
            break;
        case 3:
            printf("������\n");
            break;
        case 4:
            printf("������\n");
            break;
        case 5:
            printf("������\n");
            break;
        case 6:
            printf("������\n");
            break;
        case 7:
            printf("������\n");
            break;

    }
}



// case��������������һ�ַ�֧
// default : ��������е�������֧

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


//��֧����ѭ�����(��;�����ľ������):
