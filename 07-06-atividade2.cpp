#include<stdio.h>
main (){
	int total=0, num;
	while(total<20)
	{
		printf("total: %d \n",total);
		printf("Entre com um n�mero:");
		scanf("%d",&num);
		total+=num;
	}
	printf ("final=%d\n",total);
	
}
