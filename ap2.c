#include <stdio.h>
#include <stdlib.h>
//<stdio.h>�� <stdlib.h>�� ������ ���� �ҽ��� Ȯ�� �ϵ��� ����

//�����Լ�
void main()
{
    int list[5];    //�������迭 list����
    int *plist[5];  //�����͹迭 plist����
    //stack ������ �Ҵ�

    list[0] = 10;   //list[0]�� 10�� �ʱ�ȭ
    list[1] = 11;   //list[1]�� 11�� �ʱ�ȭ

    plist[0] = (int*)malloc(sizeof(int));   
    //plist�� heap ������ �Ҵ�


    printf("list[0] \t= %d\n", list[0]);                //list[0]�� �� ���
    printf("address of list \t= %p\n", list);           //list�� �� ���
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]�� �ּ� �� ���
    printf("address of list + 0 \t= %p\n", list+0);     //list+0�� �� ���
    printf("address of list + 1 \t= %p\n", list+1);     //list+1�� �� ���
    printf("address of list + 2 \t= %p\n", list+2);     //list+2�� �� ���
    printf("address of list + 3 \t= %p\n", list+3);     //list+3�� �� ���
    printf("address of list + 4 \t= %p\n", list+4);     //list+4�� �� ���
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]�� �ּ� �� ���
    
    free(plist[0]);
    //plist �迭�� �޸� �Ҵ� ����
}
//�ּ� ���� ��� 16������, ���� ��� 10������ ���

/*�迭���� list��ü�� list�迭�� �ּ� ���� �����Ѵ�.
���, list == &list == &list[0]�̴�.*/