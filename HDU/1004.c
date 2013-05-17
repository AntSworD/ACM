#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)&&n!=0)
	{
		char s[1001][1001];
		int m[1001]={0},k,p=0;
		for(i=0;i<n;i++) scanf("%s",&s[i]);
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(strcmp(s[i],s[k])==0) m[i]++;
			}
			if(m[i]>m[p]) p=i;
		}
		printf("%s\n",s[p]);
	}
	return 0;
}