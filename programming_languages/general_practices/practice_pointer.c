#include <stdio.h>

int main() {


int a = 10;

printf("a'in değeri: %d\n" , a );
printf("a'in adresi: %p\n" , (void*)&a) ;




int x = 5;
int *p = &x;  // p isimli bir pointer oluştur ve içerisine x'in adresini koy.

//    Adres       İçerik
//   0x1000  ->    5   (x)
//   0x2000  ->    0x1000 (p)



printf("%d\n", *p);
*p = 99; // p nin gösterdiği adrese git ve onu 99 yap.
printf("%d\n", x);

//bellek artık böyle oldu FKT.

//    Adres       İçerik
//   0x1000  ->    99   (x)
//   0x2000  ->    0x1000 (p)

printf ("selam : %d %d %d %d %d %d \n",5,6,4,3,2,1);


return 0;



    
}