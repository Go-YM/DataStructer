#include <stdio.h>
//<stdio.h>�� ������ ���� Ȯ���ϵ��� ����

//�޸� ��뷮�� longŸ������ ����ϴ� ���α׷��� �����Լ�
int main()
{

    char charType;      //char�� ��������
    int integerType;    //int�� ��������
    float floatType;    //float�� ��������
    double doubleType;  //double�� ��������

    printf("----[����] [2019038003]----\n\n");

    //�������� �޸� �������� �޸𸮸� �󸶳� ����ϴ��� ���
    printf("Size of char: %ld byte\n",sizeof(charType));        //char�� ����
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int�� ����
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float�� ����
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double�� ����

    //�⺻ �ڷ������� �޸� �������� �޸𸮸� �󸶳� ����ϴ��� ���
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //char �ڷ���
    printf("Size of int: %ld bytes\n",sizeof(int));             //int �ڷ���
    printf("Size of float: %ld bytes\n",sizeof(float));         //float �ڷ���
    printf("Size of double: %ld bytes\n",sizeof(double));       //double �ڷ���

    //������ ���� �ڷ������� �޸� �������� �޸𸮸� �󸶳� ����ϴ��� ���
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //char ������ ����
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //int ������ ����
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //float ������ ����
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //double ������ ����

    //������ ���� �ڷ������� �ڷ����� ������� �ü���� ���� �����ǹǷ� ��� �����ϰ� ��µ�

    return 0; //0��ȯ
}