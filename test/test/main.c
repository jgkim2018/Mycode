//외부 .c, .h 파일 참조 test

#include <stdio.h>
#include <stdlib.h>

#include "usart.h"
#include "calc.h"
//extern int aaa;

void main(void)
{
	int tmp = 0;
	aaa = 1000;
	bbb = 500;
	printf("test\n");
	print_test(my_num);
	
	while (1)
	{
		print_test(tmp);
		print_test2(tmp);
		print_test3(tmp);
		print_test(aaa--);
		print_test3_(tmp + 2);
		for (int md = 0; md < 500000000; md++);
		tmp++;
	}
	////
	system("pause");
}