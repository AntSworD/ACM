#include<stdio.h>
int main()
{
	int n;    
	int i;    
	while(scanf("%d",&n)!=EOF)    
	{        
		int res=1;        
		if(n<=41)        
		{        
			for(i=1;i<=n;i++)        
			{            
				res*=i%2009;            
				res%=2009;        
			}        
		}        
		else res=0;        
		printf("%d\n",res);    
	}    
	return 0;
}