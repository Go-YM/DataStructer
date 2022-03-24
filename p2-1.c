#include <stdio.h>
//<stdio.h>를 컴파일전에 소스에 확장 하도록 지시
#define MAX_SIZE 100
//MAX_SIZE를 값이 100인 상수로 지정

float sum(float [], int);       //sum 함수 원형
float input[MAX_SIZE], answer;  //실수형 배열 input과 실수형 변수 answer 선언
int i;                          //정수형 변수 i 선언

//메인함수
void main(void)
{
    printf("----- [고영민] [2019038003] -----\n");

    for(i=0; i < MAX_SIZE; i++) //100번 반복하는 반복문
    input[i] = i;               //input배열의 값을 i로 초기화
    
    /* for checking call by reference */
    printf("address of input = %p\n", input);   //input의 값 출력
    answer = sum(input, MAX_SIZE);              //anwser에 sum함수의 결과 값 초기화
    //input은 call by reference, MAX_SIZE는 call by value
    printf("The sum is: %f\n", answer);         //anwser의 값 출력
}

//list의 주소와 정수 n을 매개변수로 하는 함수 sum
float sum(float list[], int n)                
{
    printf("value of list = %p\n", list);       //list의 값 출력
    printf("address of list = %p\n\n", &list);  //list의 주소 값 출력
    
    int i;              //정수형 변수 i선언
    float tempsum = 0;  //실수형 변수 tempsum을 선언 후 0 초기화
    
    for(i = 0; i < n; i++)  
    tempsum += list[i]; //tempsum에 list[0~n]까지의 합을 저장
    
    return tempsum; //tempsum 반환
}

/*call by reference와 call by value를 사용해 함수에 값을 전달.
call by reference => 주소 값을 전달해 접근
call by value => 값 자체를 전달해 접근*/