#include<stdio.h>

int main(void)
{
    int prodottiacquistati;
    float prezzounitario, importototale, sconto, importononscontato;
    printf("Inserisci il numero prodotti acquistati: ");
    scanf("%d", &prodottiacquistati);
    printf("Inserisci il prezzo unitario: ");
    scanf("%f", &prezzounitario);
    importototale = prezzounitario * prodottiacquistati;
    if (importototale > 50){
        sconto = 0.20;}
    else if (importototale > 10);{
        sconto = 0.10;}
    printf("L'importo è di %.2f euro\n", importototale);
    printf("Lo sconto è di %.2f euro\n", sconto * 100);
    printf("L'importo totale non scontato è di %.2f euro", importototale - (sconto * 100));
    return 0;
}
