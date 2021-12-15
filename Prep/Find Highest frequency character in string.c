#include <string.h>
 
int main()
{
    char s[1000];  
    int  a[1000],i,j,k=0,count=0,n;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(j=0;s[j];j++);
	   n=j; 
    //It will go untill the null , cause j is null

    
    for(i=0;i<n;i++)  
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;
	   
	   
 	}
 	printf("maximum occuring characters ");
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }  
     
	printf("\b=%d times \n ",k);
 
 	 
     
    return 0;
}