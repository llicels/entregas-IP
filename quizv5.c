#include <stdio.h>

/*
*	ALUNAS:
*	Alice Lopes de Sousa - 15437231
*	Rayssa Buarque Malheiros - 14922874
*/

int main(void)
{
	int reset = 0; // verifica se o usuário deseja refazer o quiz

	printf("Responda às perguntas com:\n s = sim\n n = não\n v = às vezes\n\n\n");
	do // looping para refazer o quiz
	{
		// variaveis que contam os pontos
		int sim = 0;
		int nao = 0;
		int asVezes = 0;

		int resposta = 0;		  // Resposta temporária
		int contadorResposta = 0; // verifica a inserção do caractere+enter
		int resTemp[2];			  // armazena o caractere e o enter (\n)

		int verificaResposta = 0; // verifica se o usuário inseriu o caractere desejado (s, n, v)

		void pontos()
		{
			if (resposta == 's')
			{
				sim += 1;
				verificaResposta++;
				resposta = 0;
			}
			else if (resposta == 'n')
			{
				nao += 1;
				verificaResposta++;
				resposta = 0;
			}
			else if (resposta == 'v')
			{
				asVezes += 1;
				verificaResposta++;
				resposta = 0;
			}
		}

		char coletaResposta()
		{

			do
			{
				resTemp[1] = resTemp[0];
				resTemp[0] = getchar();

				contadorResposta += 1;
			} while (resTemp[0] != '\n'); //"filtra" o  enter

			if (contadorResposta != 2)
			{ // se o usuário inserir mais de "um caractere+enter"
				contadorResposta = 0;
				return 45;
			}
			else
			{
				contadorResposta = 0;
				return resTemp[1];
			}
		}

		void pergunte(int npergunta)
		{
			resposta = coletaResposta();

			while (resposta == 45) // se o usuário inserir mais de "um caractere+enter" ele deve responder novamente
			{
				printf("Resposta da questão %d:\n", npergunta);
				resposta = coletaResposta();
			}

			pontos();
		}

		// QUESTAO 1

		do
		{ // as perguntas se repetem caso o usuário não responder com "s, n ou v"
			printf("1-Quando você tenta não verificar seus e-mails durante um certo período, sente-se temoroso, ansioso ou obcecado com isso?\n");
			printf("Resposta da questão 1:\n");
			pergunte(1);
		} while (verificaResposta != 1);

		// QUESTAO 2
		do
		{
			printf("2-Gastar tempo lendo ou enviando e-mails fez com que perdesse um compromisso importante ou se atrasasse para uma reunião ao menos uma vez na semana anterior?\n");
			printf("Resposta da questão 2:\n");
			pergunte(2);
		} while (verificaResposta != 2);

		/// QUESTAO 3
		do
		{
			printf("3-Você está enviando e-mails aqueles que estão nos cubículos ou escritórios próximos a você, ou para membros de sua família que estão no mesmo apartamento ou casa que você, em vez de falar-lhes pessoalmente ou pelo telefone?\n");
			printf("Resposta da questão 3:\n");
			pergunte(3);
		} while (verificaResposta != 3);

		// QUESTAO 4
		do
		{
			printf("4-Você se diverte mais lendo e-mails ou surfando na internet do que comendo, fazendo exercícios, socializando-se, vivenciando relações íntimas com alguém ou lendo?\n");
			printf("Resposta da questão 4:\n");
			pergunte(4);
		} while (verificaResposta != 4);

		// QUESTAO 5
		do
		{
			printf("5-Quando você viaja, sente-se compelido a ler ou responder a e-mails, não importa a distância que esteja?\n");
			printf("Resposta da questão 5:\n");
			pergunte(5);
		} while (verificaResposta != 5);

		// QUESTAO 6
		do
		{
			printf("6-Um ou mais amigos ou familiares lhe disseram, mesmo brincando: 'Você está viciado na internet' ou 'Vocẽ está viciado em ler e-mail?'\n");
			printf("Resposta da questão 6:\n");
			pergunte(6);
		} while (verificaResposta != 6);

		// QUESTAO 7
		do
		{
			printf("7-Você acorda no meio da noite para verificar os e-mails?'\n");
			printf("Resposta da questão 7:\n");
			pergunte(7);
		} while (verificaResposta != 7);

		// QUESTAO 8
		do
		{
			printf("8-Você tem a necessidade de verificar os seus e-mails toda manhã, ou logo que chega no trabalho, mesmo que tenha outras prioridades?'\n");
			printf("Resposta da questão 8:\n");
			pergunte(8);
		} while (verificaResposta != 8);

		// QUESTAO 9
		do
		{
			printf("9-Sente-se deprimido ou decepcionado se não receber uma certa quantidade de e-mails diariamente?'\n");
			printf("Resposta da questão 9:\n");
			pergunte(9);
		} while (verificaResposta != 9);

		// QUESTAO 10
		do
		{
			printf("10-Os e-mails e a internet estão lhe tomando cada vez mais tempo durante o dia, a noite e nos finais de semana - chegando a três ou quatro horas diariamente?'\n");
			printf("Resposta da questão 10:\n");
			pergunte(10);
		} while (verificaResposta != 10);

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
