#include<stdio.h>

main()

{                                              
   float  side, area=0 ;
   float  *p2, *p1 ;
   printf("Enter side of square") ;
   scanf("%f",&side) ;

   p2 =&side;
   p1 =&area ;

   area=(*p2)*(*p2) ;
   printf("\n Area of square is %f",*p1) ;

}

	
	

