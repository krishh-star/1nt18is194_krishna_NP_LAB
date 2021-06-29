//error detection program.
#include<stdio.h>
void main()
{
	int n,m;
	int divisor[50],data[50];
	printf("Enter the number of bits of polynomial\n");
	scanf("%d",&n);
	printf("Enter the number of bits of data\n");
	scanf("%d",&m);
	printf("Enter polynomial \n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&divisor[i]);
	}
	printf("Enter data \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&data[i]);
	}
	int append_no_0=m-1;
	int data_ar_len=m+append_no_0;
	printf("\n No of 0's to be added is %d",append_no_0);
	for(i=m;i<data_ar_len;i++)
	{
		data[i]=0;
	}
	
	printf("\n new length %d ",data_ar_len);
	printf("\nData appended\n");
	for(i=0;i<data_ar_len;i++)
	{
		printf("%d",data[i]);
	}
	int f[50],quotient[50];
	int temp,j;
	for(i=0;i<m;i++)
	{
		temp=i;
		if(data[i]==1)
		{
			for(j=0;j<n;j++)
			{
				if(data[temp]==divisor[j])
				{
					data[temp]=0;
					f[j]=0;
				}
				else
				{
					data[temp]=1;
					f[j]=1;
				}
				temp=temp+1;
			}
			quotient[i]=1;
		}
		else quotient[i]=0;
	}
	printf("\n Quotiont is ");
	for(i=0;i<m;i++)
	{
		printf("%d",quotient[i]);
	}
	int error_flag;
	printf("\n Remainder is ");
	for(j=0;j<n;j++)
	{
		printf("%d",f[j]);
		if(f[j]==0)
		{
			error_flag=0;
		}
		else
		error_flag=1;
	}
	//printf("\n%d",error_flag);
	if(error_flag==1)
	{
		printf("\nError detected");
	}
	else
	{
		printf("\nError not detected");
	}
		
	
}
