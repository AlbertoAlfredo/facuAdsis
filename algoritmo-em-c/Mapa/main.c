#include <stdio.h>

char* jedico(n) {
    if (n < 100000) {
        return("Padawan");
    } else if (n >= 100000 && n < 1000000) {
        return("Cavaleiro Jedi");
    } else {
        return("Mestre Jedi");
    }
}

int main() {
    long int midi;
    int ciclos;

    printf("Digite a quantidade de midi-chlorians ");
    scanf("%d", &midi);
    printf("Digite a quantidade de ciclos de treinamento ");
    scanf("%d", &ciclos);

    midi += (ciclos * 1000);

    printf("Aquantidade de %d midi-chlorians faz com que você seja um %s ", midi, jedico(midi));

    return 0;
   }



