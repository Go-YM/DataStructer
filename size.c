#include<stdio.h>
#include<stdlib.h>
//<stdio.h>와 <stdlib.h>을 컴파일전에 소스에 확장하도록 지시

//메인함수
void main()
{
    int **x;    //이중포인터 변수 x선언
    short **y;  //이중포인터 변수 y선언

    printf("----- [고영민] [2019038003] -----\n");

    printf("sizeof(x) = %lu\n", sizeof(x));         //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x의 크기 출력

    printf("\n");

    printf("sizeof(y) = %lu\n", sizeof(y));         //y의 크기 출력
    printf("sizeof(*y) = %lu\n", sizeof(*y));       //*y의 크기 출력
    printf("sizeof(**y) = %lu\n", sizeof(**y));     //**y의 크기 출력
}
/* *x와 x는 포인터이기 때문에 컴퓨터의 운영체제에 따라 결정 된다.(32bit = 4 , 64bit = 8)
**x는 int 형이므로 4가 출력된다. 
이를 좀더 직관적으로 보기위해 임의로 short형 변수 **y를 선언해 출력했다.
**y는 short형이므로 2가 출력되고, *y,y는 *x,x와 같은 값을 출력한다. */