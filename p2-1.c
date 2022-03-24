#include <stdio.h>
//<stdio.h>�� ���������� �ҽ��� Ȯ�� �ϵ��� ����
#define MAX_SIZE 100
//MAX_SIZE�� ���� 100�� ����� ����

float sum(float [], int);       //sum �Լ� ����
float input[MAX_SIZE], answer;  //�Ǽ��� �迭 input�� �Ǽ��� ���� answer ����
int i;                          //������ ���� i ����

//�����Լ�
void main(void)
{
    printf("----- [����] [2019038003] -----\n");

    for(i=0; i < MAX_SIZE; i++) //100�� �ݺ��ϴ� �ݺ���
    input[i] = i;               //input�迭�� ���� i�� �ʱ�ȭ
    
    /* for checking call by reference */
    printf("address of input = %p\n", input);   //input�� �� ���
    answer = sum(input, MAX_SIZE);              //anwser�� sum�Լ��� ��� �� �ʱ�ȭ
    //input�� call by reference, MAX_SIZE�� call by value
    printf("The sum is: %f\n", answer);         //anwser�� �� ���
}

//list�� �ּҿ� ���� n�� �Ű������� �ϴ� �Լ� sum
float sum(float list[], int n)                
{
    printf("value of list = %p\n", list);       //list�� �� ���
    printf("address of list = %p\n\n", &list);  //list�� �ּ� �� ���
    
    int i;              //������ ���� i����
    float tempsum = 0;  //�Ǽ��� ���� tempsum�� ���� �� 0 �ʱ�ȭ
    
    for(i = 0; i < n; i++)  
    tempsum += list[i]; //tempsum�� list[0~n]������ ���� ����
    
    return tempsum; //tempsum ��ȯ
}

/*call by reference�� call by value�� ����� �Լ��� ���� ����.
call by reference => �ּ� ���� ������ ����
call by value => �� ��ü�� ������ ����*/