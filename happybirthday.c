#include<stdio.h>
int main()
{
	int row,col,space=1;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5;col++)
		{
			if(col==1 ||col==5||row==3)
				printf("*");
			else
				printf(" ");
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{
			if(col==1||col==5||row==1||row==3)
				printf("*");
			else
				printf(" ");
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{  if(col==1|| (row==1 && col!=5)||(row==3 && col!=5)||(col==5 && row!=1 && row!=3 && row!=4 &&row!=5))
				printf("*");				
			else
				printf(" ");	
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{  
		if(col==1|| (row==1 && col!=5)||(row==3 && col!=5)||(col==5 && row!=1 && row!=3 && row!=4 &&row!=5))
			printf("*");
		else
			printf(" ");	
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{
		if((row==1 && col!=2 && col!=3 && col!=4)||(row==2 && col!=1 && col!=3 && col!=5)||(row==3 && col!=1 && col!=2 && col!=4 && col!=5)||(row==4 && col!=1 && col!=2 && col!=4 && col!=5)||(row==5 && col!=1 && col!=2 && col!=4 && col!=5))
			printf("* ");
		else
			printf(" ");	
		}
		printf("\n");
	}
	printf(" \n");
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5;col++)
		{
			if(col==1||(row==1 && col!=5)||(row==2 && col!=2 && col!=3 && col!=4)||(row==3 && col!=5)||(row==4 && col!=2 && col!=3 && col!=4)||(row==5 && col!=5))
				printf("*");
			else
				printf(" ");
		
		}
		for(space=1;space<=7;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{
			if(row==1||row==5||col==3)
				printf("*");
			else
				printf(" ");			
		}
		for(space=1;space<=7;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{  
			if(row==1 && col!=5|| col==1||(row==2 && col!=2 && col!=3 && col!=4)||(row==3 && col!=5)||(row==4 && col!=2 && col!=4 && col!=5)||(row==5 && col!=2 && col!=3 && col!=4))
				printf("*");		
			else
				printf(" ");		
				
		}
		for(space=1;space<=7;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{  
			if(row==1||col==3)		
				printf("*");
			else
				printf(" ");			
		}
		for(space=1;space<=7;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{
			if(col==1||col==5||row==3)
				printf("*");	
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5;col++)
		{
			if(row==1 && col!=5||(row==2 && col!=2 && col!=3 && col!=4)||(row==3 && col!=2 && col!=3 && col!=4)||(row==4 && col!=2 && col!=3 && col!=4)||(row==5 && col!=5))
				printf("*");
			else
				printf(" ");
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{
			if(col==1||col==5||row==1||row==3)
				printf("*");
			else
				printf(" ");	
		}
		for(space=1;space<=5;space++)
			printf(" ");
		
		for(col=1;col<=5;col++)
		{  
			if((row==1 && col!=2 && col!=3 && col!=4)||(row==2 && col!=1 && col!=3 && col!=5)||(row==3 && col!=1 && col!=2 && col!=4 && col!=5)||(row==4 && col!=1 && col!=2 && col!=4 && col!=5)||(row==5 && col!=1 && col!=2 && col!=4 && col!=5))
				printf("*");				
			else
				printf(" ");	
		}
		
		
		printf("\n");
	}
	return (0);
	
}
