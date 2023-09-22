#include<stdio.h>


int main(){

    int numeroUsuario;

     printf("Digite um numero:");
     scanf("%d", &numeroUsuario);

     for ( int i = 1; i <= numeroUsuario; i++)
     {
        if (numeroUsuario % i == 0)
        {
            printf("\n%d", i);
        }
        
     }
     

}
