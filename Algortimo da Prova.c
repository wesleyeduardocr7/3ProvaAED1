#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>


int somaDigitos(int numero){

   char numeroConvertidoEmStr[1000];
   sprintf(numeroConvertidoEmStr,"%d", numero);
   int vetor[strlen(numeroConvertidoEmStr)];
   int i = 0;

   int h = 0;
   for(h; h < strlen(numeroConvertidoEmStr); h++){
        if(numeroConvertidoEmStr[h] == '1' ){
            vetor[h] = 1;
        }else if(numeroConvertidoEmStr[h] == '2' ){
            vetor[h] = 2;
        }else if(numeroConvertidoEmStr[h] == '3' ){
            vetor[h] = 3;
        }else if(numeroConvertidoEmStr[h] == '4' ){
            vetor[h] = 4;
        }else if(numeroConvertidoEmStr[h] == '5' ){
            vetor[h] = 5;
        }else if(numeroConvertidoEmStr[h] == '6' ){
            vetor[h] = 6;
        }else if(numeroConvertidoEmStr[h] == '7' ){
            vetor[h] = 7;
        }else if(numeroConvertidoEmStr[h] == '8' ){
            vetor[h] = 8;
        }else if(numeroConvertidoEmStr[h] == '9' ){
            vetor[h] = 9;
        }else if(numeroConvertidoEmStr[h] == '0' ){
            vetor[h] = 0;
        }
   }

    int soma = 0;
    int iterador = 0;

    for(iterador; iterador < strlen(numeroConvertidoEmStr); iterador++){

        if( vetor[iterador] != 9 ){
            soma+=vetor[iterador];
        }

    }

    return soma;
}


int buscaSequencial(char nome[]){

    strupr(nome);

    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int quantidadePalavras;

    int x = 0;
    int quantEspacos = 0;
    while(x < strlen(nome)){

        if(nome[x] == 32){
            quantEspacos++;
        }

        x++;
    }

    quantidadePalavras = quantEspacos + 1;
    int vetorSomaDeCadaPalavra[quantidadePalavras-1];
    int iteradorSoma = 0;
    int soma = 0;


    int tam = 0;
    while(nome[tam] != '\0'){
        tam++;
    }

    printf("\nTamanho da Frase = %d\n",tam);
    int quantidadeDeComparacoesBuscaSequencial = 0;

    int y = 0;

    while(y <= tam){

        if(nome[y]!= 32 && !nome[y]==0){

            if(nome[y] == 'A' || nome[y] == 0){
                soma+=1;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'B'){
                soma+=2;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'C'){
                soma+=3;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'D'){
                soma+=4;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'E'){
                soma+=5;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'F'){
                soma+=6;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'G'){
                soma+=7;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'H'){
                soma+=8;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'I'){
                soma+=9;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'J'){
                soma+=1;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'K'){
                soma+=2;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'L'){
                soma+=3;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'M'){
                soma+=4;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'N'){
                soma+=5;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'O'){
                soma+=6;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'P'){
                soma+=7;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'Q'){
                soma+=8;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'R'){
                soma+=9;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'S'){
                soma+=1;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'T'){
                soma+=2;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'U'){
                soma+=3;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'V'){
                soma+=4;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'W'){
                soma+=5;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'X'){
                soma+=6;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'Y'){
                soma+=7;
                quantidadeDeComparacoesBuscaSequencial++;
            }else if(nome[y] == 'Z'){
                soma+=8;
                quantidadeDeComparacoesBuscaSequencial++;
            }


        }else{
            vetorSomaDeCadaPalavra[iteradorSoma] = soma;
            soma = 0;
            iteradorSoma++;
        }

        y++;

    }

    printf("\nA quantidade de Comparacoes na busca Sequencial Foi = %d\n\n",quantidadeDeComparacoesBuscaSequencial);

    int vetorSomaDigitos[quantidadePalavras-1];

    int c = 0;
    for(c ; c < quantidadePalavras; c++){
        vetorSomaDigitos[c] = somaDigitos(vetorSomaDeCadaPalavra[c]);
    }

    int somaFinal = 0;

    int r = 0;
    for(r ; r < quantidadePalavras; r++){
        somaFinal+=vetorSomaDigitos[r];
    }

    int numeroDaSorte = somaDigitos(somaFinal);

    return numeroDaSorte;

}


int buscaBinaria(char nome[]){

    strupr(nome);

    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int quantidadePalavras;

    int x = 0;
    int quantEspacos = 0;
    while(x < strlen(nome)){

        if(nome[x] == 32){
            quantEspacos++;
        }

        x++;
    }

    quantidadePalavras = quantEspacos + 1;
    int vetorSomaDeCadaPalavra[quantidadePalavras-1];
    int iteradorSoma = 0;
    int soma = 0;


    int tam = 0;
    while(nome[tam] != '\0'){
        tam++;
    }

    int y = 0;
    char primeiroMeio = 'M';
    char segundoMeio = 'F';
    char terceiroMeio = 'T';
    char quartoMeio = 'P';
    char quintoMeio = 'W';
    char sextoMeio = 'B';
    char setimoMeio = 'I';
    char oitavoMeio = 'D';
    char nonoMeio = 'K';
    char decimoMeio = 'R';
    char decimoPrimeiroMeio = 'Y';


    int quantidadeDeComparacoesBuscaBinaria = 0;
    while(y <= tam){

        if(nome[y]!= 32 && !nome[y]==0){

             if(nome[y] == primeiroMeio){

                soma+=4;
                quantidadeDeComparacoesBuscaBinaria++;

             }else if (nome[y] <  primeiroMeio ){


                     if(nome[y] == segundoMeio){
                            soma+=6;
                            quantidadeDeComparacoesBuscaBinaria++;
                     }else if(nome[y]<segundoMeio){


                                    if(nome[y] == sextoMeio){
                                        soma+=2;
                                        quantidadeDeComparacoesBuscaBinaria++;
                                    }else if(nome[y]<sextoMeio){

                                         if(nome[y] == 'A' || nome[y] == 0){
                                            soma+=1;
                                        }

                                    }else{

                                        if(nome[y]==oitavoMeio){
                                            soma+=4;
                                            quantidadeDeComparacoesBuscaBinaria++;
                                        }else if(nome[y]<oitavoMeio){

                                                 if(nome[y] == 'C'){
                                                    soma+=3;
                                                 }

                                        }else{

                                            if(nome[y] == 'E'){
                                                soma+=5;
                                            }
                                        }

                                    }

                     }else{

                         if(nome[y] == setimoMeio){
                            soma+=9;
                            quantidadeDeComparacoesBuscaBinaria++;
                         }else if(nome[y] < setimoMeio){

                             if(nome[y] == 'G'){
                                soma+=7;
                             }else if(nome[y] == 'H'){
                                soma+=8;
                             }

                         }else{

                             if(nome[y] == nonoMeio){
                                soma+=2;
                                quantidadeDeComparacoesBuscaBinaria++;
                             }else if(nome[y]<nonoMeio){

                                if(nome[y] == 'J'){
                                    soma+=1;
                                }

                             }else{

                                 if(nome[y] == 'L'){
                                    soma+=3;
                                }

                             }


                         }



                     }

            }else{

                    if(nome[y] == terceiroMeio ){
                        soma+=2;
                        quantidadeDeComparacoesBuscaBinaria++;
                    }else if(nome[y] < terceiroMeio){

                                   if(nome[y]==quartoMeio){

                                        soma+=7;
                                        quantidadeDeComparacoesBuscaBinaria++;

                                   }else if(nome[y] < quartoMeio){

                                         if(nome[y] == 'N'){
                                            soma+=5;
                                        }else if(nome[y] == 'O'){
                                            soma+=6;
                                        }

                                   }else{

                                        if(nome[y] == decimoMeio){
                                            soma+=9;
                                            quantidadeDeComparacoesBuscaBinaria++;
                                        }else if(nome[y]<decimoMeio){
                                            if(nome[y] == 'Q'){
                                                soma+=8;
                                            }
                                        }else{

                                            if(nome[y] == 'S'){
                                                soma+=1;
                                            }
                                        }

                                   }


                    }else{

                            if(nome[y] == quintoMeio){
                                soma+=5;
                                quantidadeDeComparacoesBuscaBinaria++;
                            }else if(nome[y] < quintoMeio){

                                if(nome[y] == 'U'){
                                soma+=3;
                                }else if(nome[y] == 'V'){
                                    soma+=4;
                                }

                            }else{

                                if(nome[y] == decimoPrimeiroMeio){

                                    soma+=7;
                                    quantidadeDeComparacoesBuscaBinaria++;

                                }else if(nome[y]< decimoPrimeiroMeio){

                                        if(nome[y] == 'X'){
                                            soma+=6;
                                        }

                                }else{

                                    if(nome[y] == 'Z'){
                                        soma+=8;
                                    }
                                }

                            }
                    }


            }


        }else{
            vetorSomaDeCadaPalavra[iteradorSoma] = soma;
            soma = 0;
            iteradorSoma++;
        }

        y++;

    }

    int vetorSomaDigitos[quantidadePalavras-1];

    printf("A quantidade de Comparacoes na busca Binaria Foi = %d\n\n",quantidadeDeComparacoesBuscaBinaria);

    int c = 0;
    for(c ; c < quantidadePalavras; c++){
        vetorSomaDigitos[c] = somaDigitos(vetorSomaDeCadaPalavra[c]);
    }

    int somaFinal = 0;

    int r = 0;
    for(r ; r < quantidadePalavras; r++){
        somaFinal+=vetorSomaDigitos[r];
    }

    int numeroDaSorte = somaDigitos(somaFinal);

    return numeroDaSorte;

}


void ordenacaoComBubbleSort (int vetor[], int n) {

   printf("Vetor NAO Ordenado: ");
   int i;
   for(i = 0; i < n; i++){

        printf("%d ",vetor[i]);

    }

    printf("\n\n");

   int k, j, aux,iteracao = 0;
    clock_t Ticks[2];
    Ticks[0] = clock();

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - k; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                printf("Iteracao %d\n",iteracao+1);
                iteracao++;
                printf("[%d] > [%d], SIM, entao %d troca com %d",aux,vetor[j + 1],aux,vetor[j + 1]);
                vetor[j + 1] = aux;

                int i;
                printf("\nVetor Atual: ");
                for(i = 0; i < n; i++){
                    printf("%d ",vetor[i]);
                }

                 if(aux>vetor[j + 1]){
                    printf("\nMAIOR = %d\n\n",aux);
                 }else{
                    printf("\nMAIOR = %d\n\n",vetor[j + 1]);
                 }


            }else{
                printf("Iteracao %d\n",iteracao+1);
                iteracao++;
                printf("[%d] > [%d], NAO, NAO FAZ TROCA\n",aux,vetor[j + 1]);
                int i;
                printf("Vetor Atual: ");
                for(i = 0; i < n; i++){

                    printf("%d ",vetor[i]);
                }


                 if(aux>vetor[j + 1]){
                    printf("\nMAIOR = %d\n\n",aux);
                 }else{
                    printf("\nMAIOR = %d\n\n",vetor[j + 1]);
                 }
            }
        }
    }

    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("TEMPO GASTO: %g ms\n\n", Tempo);

    printf("\nComplexidade Pior Caso: O(n²)\n");
    printf("\nComplexidade Caso Medio: O(n²)\n");
    printf("\nComplexidade Melhor Caso: O(n)\n");


}


int particiona(int vetor[], int inicio, int fim, int tamanho){

    int esq,dir,pivo,aux;

    esq = inicio;
    dir = fim;
    pivo = vetor[inicio];
    int k;

    printf("Pivo Atual = %d\n\n",pivo);

    while(esq < dir){

        printf("esq = %d\n",esq);
        printf("dir = %d\n\n",dir);

        while(vetor[esq] <= pivo){
            printf("vetor[esq](%d) <= pivo(%d)? Sim!\n",vetor[esq],pivo);
            esq++;
            printf("Avanco Pra Direita\nEsq = %d\n",esq);
        }

         k = 0;
         printf("\n");
         printf("Vetor RESULTADO EM ANDAMENTO: ");
         for(k; k < 7; k++){
                printf("%d ",vetor[k]);
         }
          printf("\n\n");

        printf("vetor[esq](%d) <= pivo(%d)? NAO! Prosegue\n",vetor[esq],pivo);

        while(vetor[dir] > pivo){
            printf("vetor[dir](%d) > pivo(%d)? Sim!\n",vetor[dir],pivo);
            dir--;
            printf("RECUO para Esquerda\nDir = %d\n",dir);
        }

         k = 0;
         printf("\n");
         printf("Vetor RESULTADO EM ANDAMENTO: ");
         for(k; k < 7; k++){
                printf("%d ",vetor[k]);
         }
          printf("\n\n");


        printf("vetor[dir](%d) > pivo(%d)? NAO! Prosegue\n",vetor[dir],pivo);

        if(esq < dir){
            printf("esq(%d) < dir(%d)? Sim!\n",vetor[dir],pivo);
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            printf("[%d] troca com [%d]\n",vetor[dir],vetor[esq]);
            printf("Valor Esq = %d\n",esq);
            printf("Valor Dir = %d\n",dir);

            printf("\n\n");

            int k = 0;
            printf("\n");
             printf("Vetor RESULTADO EM ANDAMENTO: ");
             for(k; k < 7; k++){
                    printf("%d ",vetor[k]);
             }

             printf("\n\n");


        }else{
            printf("%d NAO EH MENOR QUE %d\n",esq,dir);
            printf("\nPROXIMO PIVO\n\n");
        }

    }

    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;

    return dir;


}

double ordenacaoComQuickSort(int vetor[], int inicio, int fim, double soma) {

    int pivo;

     double Tempo ;
     clock_t Ticks[2];
     Ticks[0] = clock();

     int k = inicio;
     printf("Vetor Atual PARTICIONADO Apos a TROCA DO PIVO: ");
     for(k; k <= fim; k++){
            printf("%d ",vetor[k]);
     }

     printf("\n");

    if(fim > inicio){

        pivo = particiona(vetor,inicio,fim,fim);
        ordenacaoComQuickSort(vetor,inicio,pivo-1, soma+=Tempo);
        ordenacaoComQuickSort(vetor,pivo+1,fim, soma+=Tempo);

    }

    Ticks[1] = clock();
    Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;

    return soma;
}


int main(){

   setlocale(LC_ALL, "portuguese-brazilian");


   int quant = 0;
   int op;
   int tam = 10;
   int i = 0;
   int k;
   int vetorNumerosDaSorte[tam];
   char palavra[tam][100];
   int vetorBubleSort[] = { 33, 12, 45,18, 69, 2 , 20};
   int vetorQuickSort[] = { 33, 12, 45,18, 69, 2 , 20};
   int vetor[] = { 33, 12, 45,18, 69, 2 , 20};
   int tamVetorDeInteiros = sizeof(vetor)/4;

   do{
   printf("1 - Digitar Nome\n");
   printf("2 - Ver Numeros da Sorte\n");
   printf("3 - Ordenacao dos Numeros da Sorte\n");
   printf("4 - Ordenacao do Vetor { 33, 12, 45,18, 69, 2 , 20}\n");
   printf("5 - Ordenacao do Vetor de Numeros Sorteados com o Vetor { 33, 12, 45,18, 69, 2 , 20}\n");
   printf("0 - Sair\n");
   scanf("%d",&op);

   switch(op){

        case 0:
        break;

        case 1:

            if(i==10){
                printf("\nLimite de quantidade de Nomes Excedido\n");
            }

            printf("Digite o NOME: ");
            fflush(stdin);
            gets(palavra[i]);
            i++;


            break;

            case 2:

                if(i==0){
                    printf("\nA lista de Nomes Esta Vazia!\n\n");
                }else{


                    for(k = 0; k < i; k++){

                        printf("------------------------------------------------");

                        int numeroDaSorte;

                        numeroDaSorte = buscaSequencial(palavra[k]);
                        numeroDaSorte = buscaBinaria(palavra[k]);

                        printf("O Numero da Sorte da frase '%s' eh: %d\n\n",palavra[k],numeroDaSorte);

                        vetorNumerosDaSorte[k] = numeroDaSorte;

                    }

                   printf("------------------------------------------------\n");

                }


            break;


            case 3:

                if(i!=0){

                    printf("-----------------BUBLE SORT--------------------\n\n");

                    int vetorNumerosDaSorteComBubleSort[i];

                    int p = 0;
                    for(p; p < i; p++){
                        vetorNumerosDaSorteComBubleSort[p] = vetorNumerosDaSorte[p];
                    }

                    ordenacaoComBubbleSort(vetorNumerosDaSorteComBubleSort,i);

                    int b = 0;
                    printf("\nVetor Ordenado Com BubleSort: ");
                    for(b; b < i; b++){

                        printf("%d ",vetorNumerosDaSorteComBubleSort[b]);

                    }

                    printf("\n\n");


                    printf("\n\n-----------------QUICK SORT--------------------\n\n");

                   int vetorNumerosDaSorteComQuickSort[i];

                    int g = 0;
                    for(g; g < i; g++){
                        vetorNumerosDaSorteComQuickSort[g] = vetorNumerosDaSorte[g];
                    }

                   printf("Vetor NAO Ordenado: ");
                   int a = 0;
                   for(a; a < i; a++){

                        printf("%d ",vetorNumerosDaSorteComQuickSort[a]);

                    }

                    printf("\n\n");

                    ordenacaoComQuickSort(vetorNumerosDaSorteComQuickSort,0,i, 0.0);

                    printf("\nVetor Ordenado Com QuickSort: ");
                    int z;
                    for(z = 0; z < i; z++){

                        printf("%d ",vetorNumerosDaSorteComQuickSort[z]);

                    }

                    printf("\n\n\nComplexidade Pior Caso: O(n²)\n");
                    printf("\nComplexidade Caso Médio: (nlogn)\n");
                    printf("\nomplexidade Melhor Caso: (nlogn)\n");

                    printf("\n\n");



                }else{

                    printf("\nA lista de Nomes Esta Vazia!\n\n");

                }

                break;

            case 4:

                if(i>=0){

                     printf("-----------------BUBLE SORT--------------------\n\n");

                        ordenacaoComBubbleSort(vetorBubleSort,tamVetorDeInteiros);

                        int i;
                        printf("\nVetor Ordenado Com BubleSort: ");
                        for(i = 0; i < tamVetorDeInteiros; i++){

                            printf("%d ",vetorBubleSort[i]);

                        }

                        printf("\n\n");

                        printf("\n\n-----------------QUICK SORT--------------------\n\n");

                       printf("Vetor NAO Ordenado: ");
                       for(i = 0; i < tamVetorDeInteiros; i++){

                            printf("%d ",vetorQuickSort[i]);

                        }

                        printf("\n\n");


                        double tempo =  ordenacaoComQuickSort(vetorQuickSort,0,6, 0.0);

                        printf("TEMPO ATUAL GASTO: %g ms\n\n",tempo);

                        printf("\n\nVetor Ordenado Com QuickSort: ");
                        for(i = 0; i < tamVetorDeInteiros; i++){

                            printf("%d ",vetorQuickSort[i]);

                        }

                        printf("\n\n");

                    }

                break;

            case 5:

                if(i!=0){


                    for(k = 0; k < i; k++){

                        printf("------------------------------------------------");

                        int numeroDaSorte;

                        numeroDaSorte = buscaSequencial(palavra[k]);
                        numeroDaSorte = buscaBinaria(palavra[k]);

                        printf("O Numero da Sorte da frase '%s' eh: %d\n\n",palavra[k],numeroDaSorte);

                        vetorNumerosDaSorte[k] = numeroDaSorte;

                    }


                    int tamanhoVetorFinal = i+tamVetorDeInteiros;
                    int vetorFinal[tamanhoVetorFinal];
                    int vetorFinalCopia[tamanhoVetorFinal];

                    int j = 0;
                    int k = 0;

                    for(j; j < i; j++){

                        vetorFinal[j] = vetorNumerosDaSorte[j];
                        vetorFinalCopia[j] = vetorNumerosDaSorte[j];

                    }

                    for(j; j < tamanhoVetorFinal; j++){

                        vetorFinal[j] = vetor[k];
                        vetorFinalCopia[j] = vetor[k];
                        k++;

                    }

                    int temp = 0;
                    printf("Vetor Final: [ ");
                    for(temp; temp < tamanhoVetorFinal; temp++){
                        printf("%d ",vetorFinal[temp]);

                    }
                    printf(" ]");

                     printf("\n\n-----------------BUBLE SORT--------------------\n\n");

                        ordenacaoComBubbleSort(vetorFinal,tamanhoVetorFinal);

                        int i;
                        printf("\nVetor Ordenado Com BubleSort: ");
                        for(i = 0; i < tamanhoVetorFinal; i++){

                            printf("%d ",vetorFinal[i]);

                        }

                       printf("\n\n");

                       printf("\n\n-----------------QUICK SORT--------------------\n\n");

                       printf("Vetor NAO Ordenado: ");
                       for(i = 0; i < tamanhoVetorFinal; i++){

                            printf("%d ",vetorFinalCopia[i]);

                        }

                        printf("\n\n");


                        ordenacaoComQuickSort(vetorFinalCopia,0,tamanhoVetorFinal-1, 0.0);

                        printf("\n\nVetor Ordenado Com QuickSort: ");
                        for(i = 0; i < tamanhoVetorFinal; i++){

                            printf("%d ",vetorFinalCopia[i]);

                        }

                        printf("\n\n");

                }else{

                    printf("\nA lista de Nomes Esta Vazia!\n\n");

                }

                break;

            default:
                printf("Opcao Invalida!\n\n");
            break;

        }

    }while(op!=0);


return 0;

}
