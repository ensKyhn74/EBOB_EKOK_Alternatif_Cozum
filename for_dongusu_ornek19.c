#include <stdio.h>
// klavyeden girilen 2 sayının EBOB'unu ve EKOK'unu bulur

int main() 

{
 
 int sayi1,sayi2;
 int ekok;
 int i;
 
 printf("1.sayiyi girin: ");
 scanf("%d",&sayi1);
  
 printf("2.sayiyi girin: ");
 scanf("%d",&sayi2);
   
 for(i = (sayi1*sayi2) ; i > 0 ; i--)
 {
   if(i % sayi1 == 0 && i % sayi2 == 0)   
   {  
    ekok = i;    
   } 
 }  
     
 int ebob = (sayi1*sayi2) / ekok;
     
 printf("EBOB(%d,%d) = %d\n",sayi1,sayi2,ebob);  
 printf("EKOK(%d,%d) = %d",sayi1,sayi2,ekok);

 return 0;

}
