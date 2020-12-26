```c
//个人解法
#include<stdio.h>
int main()
{
int x,i,j;
int a[10];
printf("请输入要排序的10个数。\n");
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\a"); 
for(i=0;i<10;i++)
{
	for(j=0;j<(10-i);j++)
	{
		if(a[j]<a[j+1])
		{	x=a[j];
			a[j]=a[j+1];
			a[j+1]=x;
		}		
	}
}
printf("顺序为：");
for(i=0;i<10;i++)
	{	
		printf("%d\t",a[i]);
	}
return 0;
}






//书上解法
#include<stdio.h>
int main()
{
int a[10];
int i,j,t;
printf("input 10 numbers:\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("\n");
for(j=0;j<10;j++)
	for(i=0;i<9-j;i++)
		if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
 printf("The sorted numbers:\n");
 for(i=0;i<10;i++)
 printf("%d\t",a[i]);
 printf("\n");
 return 0;
}
