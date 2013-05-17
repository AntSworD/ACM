#include<stdio.h>
int	main(){ 
		int h1,h2,h3;
	while(scanf("%d%d%d",&h1,&h2,&h3)!=EOF){
		if(h1>=168&&h2>=168&&h3>=168)
			printf("NO CRASH\n");
		else{
			printf("CRASH ");
			if(h1<168){
				printf("%d\n",h1);
				break;
			}
		if(h2<168){
			printf("%d\n",h2);
			break;
		}
		if(h3<168){
			printf("%d\n",h3);
			break;
		}
		}
	}
	return 0;
}