#include<stdio.h>
main()
{

  int a,b,c,d;
  
  printf("Value of A=");
  scanf("%d",&a);
 
  printf("Value of B=");
  scanf("%d",&b);
 
  printf("Value of C=");
  scanf("%d",&c);
  
  printf("Value of D=");
  scanf("%d",&d);
  
  if(a>b)
  {
  	if(a>c)
  	{
  	    if (a>d)
	    {
	    	printf("A is Maximumm");
		}
	    else
		{
		   	printf("D  is Maximum");
		}
    }
    else
    {

        if(c>d)
        {
    	     printf(" C is Maximum");
	    }
	    else
	    { 
	         printf("D is Maximum");
		}
	}
  

 }
 else
 {
   if(b>c)
    {
    	if(b>d)
       {
			printf("B is Maximum");
		}
		else
		{
			printf("D is Maximum");
		}
	}
	else
	{
	
	   if(c>d)
	   
	   {
	    	printf(" C is Maximum");
	    }
    	else
    	
    	{
    		printf("D is Maximum");
		}
    } 
    	
			
 
 
 }
}
