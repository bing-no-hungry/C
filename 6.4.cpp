#include<stdio.h>
main()
{
	int T,b,N,d,si,f=0,h=0,g;
	scanf("%d",&T);
	for(b=1;b<=T;b++)
	{
		scanf("%d",&N);
		for(d=1;d<=N;d++)
		{
			scanf("%d",&si);
			f=f+si;
			if(f>0)
			{
				if(h<f)
				h=f;
			}
            else /* 当每道菜的愉悦值都小于0时 */
            {
            	if(d==1)
            	g=si;
            	else
            	{
            		if(si>g)
            		g=si;
				}
				f=0;
			}
		}
		if(f==0)
		printf("%d",g);
		else
		printf("%d\n",h);
		f=0;
		h=0;
	}
	return 0;
}
