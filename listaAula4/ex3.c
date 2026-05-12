/*
Faça um programa que leia um caracter
e informe se este valor é uma vogal, uma
 consoante ou um caracter especial (!, @, #, $, %)
 */
 #include <stdio.h>
 #include <locale.h>

 int main(){
     char letra;
     printf("Informe um caractere: ");
     scanf("%s", &letra);
     setlocale(LC_ALL, "");
     if(letra=="a" || letra=="e" || letra=="i" || letra=="o" || letra=="u")
        printf("Essa letra é uma vogal");
     else
        if(letra=="!"||letra=="@"||letra=="#"||letra=="$"||letra=="%")
            printf("Isso é um caractere especial");
        else
            printf("\nEssa letra é uma consoante");

     /*

    switch(letra){
        case "a":
        case "e":
        case "i":
        case "o":
        case "u":printf("É vogal");break;
        case "!":
        case "@":
        case "#":
        case "$":
        case "%":printf("É caractere especial"); break;
        default:
            printf("É consoante")
     }*/

 }
