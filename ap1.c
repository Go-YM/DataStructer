#include <stdio.h>
#include <stdlib.h>
//<stdio.h>�� <stdlib.h>�� ������ ���� �ҽ��� Ȯ�� �ϵ��� ����

//�����Լ�
void main()
{
    int list[5];                //�������迭 list ����
    int *plist[5] = {NULL,};    //�����͹迭 plist ����
    //stack������ �Ҵ�

    plist[0] = (int *)malloc(sizeof(int));  //plist�� heap������ �Ҵ�
    list[0] = 1;        //list[0]�� 1 �ʱ�ȭ    
    list[1] = 100;      //list[1]�� 100 �ʱ�ȭ
    *plist[0] = 200;    //plist[0]�� ������ �ϴ� ���� 200 �ʱ�ȭ

    printf("-----[����] [2019038003]-----\n");

    printf("value of list[0] = %d\n", list[0]);         //list[0]�� �� ���
    printf("address of list[0] = %p\n", &list[0]);      //list[0]�� �ּ� �� ���
    printf("value of list = %p\n", list);               //list�� �� ���
    printf("address of list (&list) = %p\n", &list);    //list�� �ּ� �� ���

    printf("----------------------------------------\n\n"); 
    printf("value of list[1] = %d\n", list[1]);         //list[1]�� �� ���
    printf("address of list[1] = %p\n", &list[1]);      //list[1]�� �ּ� �� ���
    printf("value of *(list+1) = %d\n", *(list + 1));   //list+1�� ������ �ϴ� �� ���
    printf("address of list+1 = %p\n", list+1);         //list+1�� �� ���

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);     //plist[0]�� ������ �ϴ� �� ���
    printf("&plist[0] = %p\n", &plist[0]);              //plist[0]�� �ּҸ� ���
    printf("&plist = %p\n", &plist);                    //plist�� �ּҸ� ���
    printf("plist = %p\n", plist);                      //plist�� �� ���    
    printf("plist[0] = %p\n", plist[0]);                //plist[0]�� �� ���
    printf("plist[1] = %p\n", plist[1]);                //plist[1]�� �� ���
    printf("plist[2] = %p\n", plist[2]);                //plist[2]�� �� ���
    printf("plist[3] = %p\n", plist[3]);                //plist[3]�� �� ���
    printf("plist[4] = %p\n", plist[4]);                //plist[4]�� �� ���

    free(plist[0]);     
    //plist �迭�� �޸� �Ҵ� ����
}
//�ּ� ���� ��� 16������, ���� ��� 10������ ���

/*���� ���� �� �� �迭 list�� plist���� �迭 list�� ���� �����ϰ� plist�� �迭�� �����Ѵ�. 
list�� �迭�̱⿡ list[0~4]�� ��� �������� ������,
plist�� ������ �迭�̱⿡ plist[0~4]�� ��� �ּ� ���� ������.*/