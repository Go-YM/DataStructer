#include <stdio.h>
//<stdio.h>�� ������ ���� �ҽ��� Ȯ���ϵ��� ����

//���� ������ ������ ������ ������ ������ �ϴ� ���α׷��� �����Լ�
int main()
{
    int i;      //int�� ���� i ����
    int *ptr;   //int�� ������ ���� ptr ����
    int **dptr; //int�� ���� ������ ���� dptr����

    printf("----[����] [2019038003]----\n\n");

    i = 1234;   //���� i�� �� 1234 �ʱ�ȭ
    printf("[checking values before ptr = &i] \n");     //ptr = &i ���� �� ���
    printf("value of i == %d\n", i);                    //i�� �� ���
    printf("address of i == %p\n", &i);                 //i�� �ּ� �� ���
    printf("value of ptr == %p\n", ptr);                //ptr�� �� ���
    printf("address of ptr == %p\n", &ptr);             //ptr�� �ּ� �� ���

    ptr = &i; //���� ptr�� i�� �ּҰ��� �ʱ�ȭ
    printf("\n[checking values after ptr = &i] \n");    //ptr = &i ���� �� ���
     printf("value of i == %d\n", i);                   //i�� �� ���
    printf("address of i == %p\n", &i);                 //i�� �ּ� �� ���
    printf("value of ptr == %p\n", ptr);                //ptr�� �� ���
    printf("address of ptr == %p\n", &ptr);             //ptr�� �ּ� �� ���
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ������ �ϴ� �� ���

    dptr = &ptr; //���� dptr�� ptr�� �ּҰ��� �ʱ�ȭ
    printf("\n[checking values after dptr = &ptr] \n"); //dptr = &ptr ���� �� ���
    printf("value of i == %d\n", i);                    //i�� �� ���
    printf("address of i == %p\n", &i);                 //i�� �ּ� �� ���
    printf("value of ptr == %p\n", ptr);                //ptr�� �� ���
    printf("address of ptr == %p\n", &ptr);             //ptr�� �ּ� �� ���
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ������ �� ���
    printf("value of dptr == %p\n", dptr);              //dptr�� �� ���
    printf("address of dptr == %p\n", &dptr);           //dptr�� �ּ� �� ���
    printf("value of *dptr == %p\n", *dptr);            //dptr�� ������ �ϴ� �� ���
    printf("value of **dptr == %d\n", **dptr);          //*dptr�� ������ �ϴ� �� ���

    *ptr = 7777; //*ptr�� ���� 7777�� ��ü
    printf("\n[after *ptr = 7777] \n");                 //*ptr = 7777 ���� �� ���
    printf("value of i == %d\n", i);                    //i�� �� ���
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ������ �ϴ� �� ���
    printf("value of **dptr == %d\n", **dptr);          //*dptr�� ������ �ϴ� �� ���

    **dptr = 8888; //*dptr�� ���� 8888�� ��ü
    printf("\n[after **dptr = 8888] \n");               //**dptr = 8888 ���� �� ���
    printf("value of i == %d\n", i);                    //i�� �� ���
    printf("value of *ptr == %d\n", *ptr);              //ptr�� ������ �ϴ� �� ���
    printf("value of **dptr == %d\n", **dptr);          //*dptr�� ������ �ϴ� �� ���

    //�ּ� ���� ���� 16���� ���, ���� 10������ ���

    return 0;   //0 ��ȯ
}