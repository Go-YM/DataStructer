#include <stdio.h>
//<stdio.h>를 컴파일 전에 확장하도록 지시

//메모리 사용량을 long타입으로 출력하는 프로그램의 메인함수
int main()
{

    char charType;      //char형 변수선언
    int integerType;    //int형 변수선언
    float floatType;    //float형 변수선언
    double doubleType;  //double형 변수선언

    printf("----[고영민] [2019038003]----\n\n");

    //변수들이 메모리 공간에서 메모리를 얼마나 사용하는지 출력
    printf("Size of char: %ld byte\n",sizeof(charType));        //char형 변수
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int형 변수
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float형 변수
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double형 변수

    //기본 자료형들이 메모리 공간에서 메모리를 얼마나 사용하는지 출력
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //char 자료형
    printf("Size of int: %ld bytes\n",sizeof(int));             //int 자료형
    printf("Size of float: %ld bytes\n",sizeof(float));         //float 자료형
    printf("Size of double: %ld bytes\n",sizeof(double));       //double 자료형

    //포인터 변수 자료형들이 메모리 공간에서 메모리를 얼마나 사용하는지 출력
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //char 포인터 변수
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //int 포인터 변수
    printf("Size of float*: %ld bytes\n",sizeof(float*));       //float 포인터 변수
    printf("Size of double*: %ld bytes\n",sizeof(double*));     //double 포인터 변수

    //포인터 변수 자료형들은 자료형에 상관없이 운영체제에 의해 결정되므로 모두 동일하게 출력됨

    return 0; //0반환
}