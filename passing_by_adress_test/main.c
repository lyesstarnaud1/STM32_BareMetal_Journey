/*
 * main.c
 *
 *  Created on: Jun 10, 2026
 *      Author: ilyes
 */
#include <stdio.h>
struct test
{
	unsigned int A[5],n;

};
void func(struct test *t)
{
	t->A[0]=0;
	t->A[4]=0;
};
int main()
{
	struct test t={{2,1,4,8,5},5};
	func(&t);
	for(int i=0;i<5;i++)
	{
		printf("A[%u] = %p size: %u\n",i,&t.A[i],(unsigned int)sizeof(t.A[i]));
	}
	printf("n = %u\n",t.n);

}
