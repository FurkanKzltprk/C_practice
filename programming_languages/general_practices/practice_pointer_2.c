#include <stdio.h>

int main() {
    int a = 7;  //adres: 0xAAAA olsun
    int b = 20; //adres: 0xBBBB olsun
    int *p;  //bir pointer tanımlanmış

    p = &a; //p pointerı a nın bellekteki değerinin bulunduğu adresi tutar ör: 0x1000

    printf("a'nin degeri: %d\n", a); //cevap : 7
    printf("a'nin adresi: %p\n", (void*)&a); //cevap : 0xAAAA 

    printf("p'nin tuttugu adres: %p\n", (void*)p);  //cevap : 0xAAAA 
    printf("p'nin gosterdigi deger (*p): %d\n", *p);//cevap : 7

    p = &b;  //p pointerı artık b değerinin adresini gösteriyor yani = 0xBBBB   

    printf("p artik b'yi gosteriyor\n");
    printf("b'nin adresi: %p\n", (void*)&b);  //cevap : 0xBBBB
    printf("p'nin tuttugu adres: %p\n", (void*)p);  //cevap : 0xBBBB
    printf("p'nin gosterdigi deger (*p): %d\n", *p); //cevap : 20

    return 0;
}
