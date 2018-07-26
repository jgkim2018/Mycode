#include<stdio.h>
#include "calc.h"

//int* bbb;

void print_test_(int tmp)
{
	printf("print_test : %d\n", tmp);
}

void print_test2_(int tmp)
{
	printf("print_test2 : %d\n", tmp + aaa);
}

void print_test3_(int tmp)
{
	printf("print_test2 : %d\n", tmp + bbb);
}