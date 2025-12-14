#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 5

int main (void) {

        int A[ROW][COL];

       

        //matrisi oluşturduk

        //içini dolduralım

        for(int i=0; i< ROW; i++){
            for(int j=0; j<COL; j++){
                A[i][j] = rand() % 100; //0-99 araıs
            }
        }

        printf("Matris: \n");
        for(int i=0; i< ROW; i++) {

            for(int j= 0; j< COL; j++){


                printf("%3d ", A[i][j]);
            }
            printf("\n");


        }


        int *base = &A[0][0];

         printf("\n--- Pointer Testi ---\n");
         printf("base (A[0][0]) adresi      : %p\n", (void*)base);
         printf("base + 1 (sonraki eleman)  : %p\n", (void*)(base + 1));
         printf("base + 2                  : %p\n", (void*)(base + 2));

         printf("\nDegerler:\n");
         printf("*base     = %d\n", *base);
         printf("*(base+1) = %d\n", *(base + 1));
         printf("*(base+2) = %d\n", *(base + 2));


        int i =2;
        int j =3;

        int offset = i * COL + j;

        int *elem_addr= base + offset; 

/*//pointer aritmetiği tip bazlıdır *4 oldu orda 13*4=52, hex taban ,RAM deyiz !!*/


/*C şöyle düşünür:
“Eğer pointer’ın tipi belliyse,
ben kaç byte atlanacağını zaten biliyorum.” !!! F_kt */ 

/*C dilinde pointer aritmetiği eleman bazlı çalıştığı için base + 
offset ifadesinde byte cinsinden çarpım yapılmasına gerek yoktur; 
derleyici bu işlemi pointer’ın türüne göre otomatik olarak gerçekleştirir.*/



        printf("\n--- Secilen Eleman ---\n");
        printf("i = %d, j = %d\n", i, j);
        printf("Hesaplanan adres : %p\n", (void*)elem_addr);
        printf("Eleman degeri    : %d\n", *elem_addr);
        *elem_addr= 999;
            printf("Guncellemeden sonra deger : %d\n", *elem_addr);

        
 // tekrar yazdıarlım bakalım 59 yerine 999 gelmiş


              printf("Matris: \n");
        for(int i=0; i< ROW; i++) {

            for(int j= 0; j< COL; j++){


                printf("%3d ", A[i][j]);
            }
            printf("\n");


        }

        return 0;


}