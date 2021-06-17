#include<stdio.h>
 int main(){
 
 int girl1,girl2,girl3;
 int *p1,*p2,*p3;
 printf("enter the first girl");
 scanf("%d",&girl1);
 printf("enter the second girl");
 scanf("%d",&girl2);
 printf("enter the third girl");
 scanf("%d",&girl3);
 p1=&girl1;
 p2=&girl2;
 p3=&girl3;
 if(*p1>*p2)
 {
 	if(*p1>*p3)
 	{
 		printf("%d is the tallest girl",*p1);
 		
	 }
	else
	{
		printf("%d is the tallest girl",*p3);
		
	}

 }
 else if(*p2>*p3)
 {
 
 printf("%d is the tallest girl",*p2);
 
	}	
	else
	{
	
	("%d is the tallest girl",*p3);
}
	 return 0;

}
