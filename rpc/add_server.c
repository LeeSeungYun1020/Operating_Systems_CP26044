#include "add.h"

int *
add_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;
	const int a = argp->a;
	const int b = argp->b;
	result = a + b;
	printf("add(%d, %d) = %d\n", a, b, result);
	return &result;
}
