#include <stdio.h>
#include <ctype.h>

//Aluno Genilson
//Prof Pedro
//IFMS
//Lista 5

//Bonus Vetores Lista5
//exercicio 8.
//4.Suponha uma prova que tenha quatro questões de múltipla escolha.
// Cada questão possui cinco alternativas, variando de A a E. Faça um programa que:
//•	Cadastre o gabarito da prova
//•	Lê o gabarito de n ≤ 20 alunos
//•	Exibe a nota de cada aluno e se é maior que a média da turma.
//•	Exibe a média da turma.

int main() {
    // Variaveis
        char gab[5] = { 'B', 'D', 'A', 'C', 'A' };
        char resp[4];
        int qtalunos;
        int nota;
        int y, i;
        float  mediaTurma=0;
    float  notaTotal=0;
   // scanf("%d", &qtalunos);

        printf("Informe a quantidade de alunos: ");
        scanf("%d", &qtalunos);

        for(i=1; i<=qtalunos;i++){
            nota=0;
            for(y=0;y<5;y++){
                printf("Informe a resposta da %da. pergunta : ", y+1);
                scanf("%s", &resp[y]);

                if(toupper(resp[y])==gab[y]){
                    nota = nota + 1;
                }
                notaTotal= nota;
                notaTotal+= resp[y];
                mediaTurma= notaTotal/qtalunos;
               //notaTotal+= nota;
            }
         //   mediaTurma= notaTotal/qtalunos;
            printf("A nota do %do aluno eh: %d\n\n A media da turma eh %.2f\n", i, nota,mediaTurma);
        }
    return 0;
}