#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	if(n==0)
	  printf("Number is Zero");
    else if(n<0)
	 printf("Negative Number");
	else
	  printf("Positive Number");
	return 0;
}
