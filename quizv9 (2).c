#include <stdio.h>

int resTemp[2];
        int sim = 0, nao = 0, asVezes = 0;
        int resposta = 0;         // Resposta temporária
        int contadorResposta = 0; // verifica a inserção do caractere+enter

        char *perguntas[] = {"1-Quando você tenta não verificar seus e-mails durante um certo período, sente-se temoroso, ansioso ou obcecado com isso?\n",
                             "2-Gastar tempo lendo ou enviando e-mails fez com que perdesse um compromisso importante ou se atrasasse para uma reunião ao menos uma vez na semana anterior?\n",
                             "3-Você está enviando e-mails aqueles que estão nos cubículos ou escritórios próximos a você, ou para membros de sua família que estão no mesmo apartamento ou casa que você, em vez de falar-lhes pessoalmente ou pelo telefone?\n",
                             "4-Você se diverte mais lendo e-mails ou surfando na internet do que comendo, fazendo exercícios, socializando-se, vivenciando relações íntimas com alguém ou lendo?\n",
                             "5-Quando você viaja, sente-se compelido a ler ou responder a e-mails, não importa a distância que esteja?\n",
                             "6-Um ou mais amigos ou familiares lhe disseram, mesmo brincando: 'Você está viciado na internet' ou 'Vocẽ está viciado em ler e-mail?'\n",
                             "7-Você acorda no meio da noite para verificar os e-mails?\n",
                             "8-Você tem a necessidade de verificar os seus e-mails toda manhã, ou logo que chega no trabalho, mesmo que tenha outras prioridades?\n",
                             "9-Sente-se deprimido ou decepcionado se não receber uma certa quantidade de e-mails diariamente?\n",
                             "10-Os e-mails e a internet estão lhe tomando cada vez mais tempo durante o dia, a noite e nos finais de semana - chegando a três ou quatro horas diariamente?\n"};

void pontos() // contabiliza as respostas dos usuarios para estabelecer o resultado do quiz
{
    if (resposta == 's')
    {
        sim += 1;
    }
    else if (resposta == 'n')
    {
        nao += 1;
    }
    else if (resposta == 'v')
    {
        asVezes += 1;
    }

    resposta = 0;
}

char coletaResposta() // certifica-se de que o usuario responda a pergunta de maneira válida
{
    do
    {
        resTemp[1] = resTemp[0];
        resTemp[0] = getchar();

        contadorResposta += 1;
    } while (resTemp[0] != '\n'); //"filtra" o  enter

    int contador = contadorResposta;
    contadorResposta = 0;

    return (contador != 2) ? 45 : resTemp[1]; //"filtra" respostas como "ssss" ou "nnnnn" ou "vvvvvv"
}

void pergunte()
{
    resposta = coletaResposta();

    while (resposta == 45 || resTemp[1] != 's' && resTemp[1] != 'n' && resTemp[1] != 'v') // é executado quando o usuário insere uma resposta inválida
    {
        printf("Resposta:\n");
        resposta = coletaResposta();
    }

    pontos();
}

int main()
{
    int reset = 0;
    do // looping de início do programa
    {
        for (int i = 0; i <= 9; i++) // looping das perguntas
        {
            printf("%s", perguntas[i]);
            printf("Resposta:\n");
            pergunte();
        }

        // RESULTADOS
        printf("Você respondeu \"SIM\" a %d questões.\n", sim);
        printf("Você respondeu \"NÃO\" a %d questões.\n", nao);
        printf("Você respondeu \"ÀS VEZES\" a %d questões.\n\n\n", asVezes);

        if (sim >= 1)
        {
            printf("Você talvez seja viciado em internet. :P\n");
        }

        else if (asVezes >= 1)
        {
            printf("É bom prestar atenção aos seus hábitos na internet, antes que se tornem mais extremos!  ):<\n");
        }

        else
        {
            printf("Parabéns! Você não é viciado em internet. XD\n");
        }

        // consulta se o usuário deseja refazer o quiz
        printf("Deseja refazer o quiz? Sim - s ou Não - n \n");
        char refazer = getchar();
        reset = 0;
        getchar();

        if (refazer == 's')
        {
            reset = 1;
        }
        else
        {
            printf("Quiz finalizado!");
            reset = 0;
        }
    } while (reset == 1);

    return 0;
}