#include<stdio.h>
#include "usart.h"

int* bbb;

void print_test(int tmp)
{
	printf("print_test : %d\n", tmp);
}

void print_test2(int tmp)
{
	printf("print_test2 : %d\n", tmp + aaa);
}

void print_test3(int tmp)
{
	printf("print_test2 : %d\n", tmp + bbb);
}