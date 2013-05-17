#include<stdio.h>
#include<math.h>
int main()
{
	int s,f,m,t;
	scanf("%d",&t);
	while(t--)
	{
		double ss;
		scanf("%d %d %d",&s,&f,&m);
		if(s>12) s=s-12;
		ss=fabs((s*3600.0+f*60+m)/(12.0*3600)*360-(f*60.0+m)/3600.0*360);
		if(ss>180) ss=360-ss;
		printf("%d\n",(int)ss);
	}
	return 0;
}