// C program to do selection sort 
//https://github.com/ARJUNRAGHUNANDANAN/C-Programs


#include<stdio.h>

void main()
{
	int Array[10],Length,temp=0;
	printf("Enter the length  :");	
	scanf("%d",&Length);
	int i =0,j=0;	
	printf("Enter the elements  :");
	for(i=0;i<l;i++)
		{
		scanf("%d",&Array[i]);
		}

printf("Performing Selection Sort");
	for(i=0;i<l;i++)
		{
		for(j=0;j<l;j++)		
			{
			    if(a[i]<a[j])
			    {	
			     temp=Array[i];
			     Array[i]=Array[j];
			     Array[j]=temp;
			    }
			
			}
		}


printf("The Array after sorting is ");
for(i=0;i<l;i++)
	printf("%d",Array[i]);

}