/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char n [2][8]={{'n', 'e', 'u', 'm','i','a','r','t'},{'b','a','p','t','i','s','t','a'}};
    
    
    //printf("%lu",sizeof(n[0]));
    for (int i = 0; i < sizeof(n[0]); i++){
         printf("%c", n[0][i]);
    }
    
    /*printf("%c", n[0][0]);
    printf("%c", n[0][1]);
    printf("%c", n[0][2]);
    printf("%c", n[0][3]);
    printf("%c", n[0][4]);
    printf("%c", n[0][5]);
    printf("%c", n[0][6]);
    printf("%c", n[0][7]);*/
    
    printf(" ");
    
    printf("%c", n[1][0]);
    printf("%c", n[1][1]);
    printf("%c", n[1][2]);
    printf("%c", n[1][3]);
    printf("%c", n[1][4]);
    printf("%c", n[1][5]);
    printf("%c", n[1][6]);
    printf("%c", n[1][7]);
    
    return 0;
}
