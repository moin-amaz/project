#include<stdio.h>
#include<stdlib.h>
main()
{
	
	int i=0, num;
	char *ptr;
	
	while(i<3)
	{
		printf("\n\nEnter the number of employee : ");   //entered employee number 
		scanf("%d", &num);
		
		ptr=(char *)malloc((num+1)*sizeof(char));  //dynamically allocte the memory
		
		printf("\nEnter your Id as Employee %d : ", num);  //enterd employee is
		scanf("%s", ptr);
		
		printf("\nYour Enterd Id is : %s", ptr);   //output of employee id 
		i++;  //increment the  number 
		free(ptr);       //free the allocated memory while we allocate the memory to the pointers
	}

}
