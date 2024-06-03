#include <stdio.h>

int main (void){
	
	int sim = 0;
	int nao = 0;
	int asVezes = 0;

	int resTemp; //Resposta temporária
	
	printf("Responda às perguntas com:\n s = sim\n n = não\n v = às vezes\n\n\n");
	
	//QUESTAO 1
	printf("1-Quando você tenta não verificar seus e-mails durante um certo período, sente-se temoroso, ansioso ou obcecado com isso?\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	//QUESTAO 2
	printf("2-Gastar tempo lendo ou enviando e-mails fez com que perdesse um compromisso importante ou se atrasasse para uma reunião ao menos uma vez na semana anterior?\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else if(resTemp == 'v'){
		asVezes += 1;
	}
	
	// //QUESTAO 3
	printf("3-Você está enviando e-mails aqueles que estão nos cubículos ou escritórios próximos a você, ou para membros de sua família que estão no mesmo apartamento ou casa que você, em vez de falar-lhes pessoalmente ou pelo telefone?\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 4
	printf("4-Você se diverte mais lendo e-mails ou surfando na internet do que comendo, fazendo exercícios, socializando-se, vivenciando relações íntimas com alguém ou lendo?\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 5
	printf("5-Quando você viaja, sente-se compelido a ler ou responder a e-mails, não importa a distância que esteja?\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 6
	printf("6-Um ou mais amigos ou familiares lhe disseram, mesmo brincando: 'Você está viciado na internet' ou 'Vocẽ está viciado em ler e-mail?'\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 7
	printf("7-Você acorda no meio da noite para verificar os e-mails?'\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 8
	printf("8-Você tem a necessidade de verificar os seus e-mails toda manhã, ou logo que chega no trabalho, mesmo que tenha outras prioridades?'\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 9
	printf("9-Sente-se deprimido ou decepcionado se não receber uma certa quantidade de e-mails diariamente?'\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	// //QUESTAO 10
	printf("10-Os e-mails e a internet estão lhe tomando cada vez mais tempo durante o dia, a noite e nos finais de semana - chegando a três ou quatro horas diariamente?'\n");
	resTemp = getchar();
	getchar();
	
	if(resTemp == 's'){
		sim += 1;
	}else if(resTemp == 'n'){
		nao += 1;
	}else{
		asVezes += 1;
	}
	
	
	
	// RESULTADOS
	printf("Você respondeu \"SIM\" a %d questões.\n", sim);
	printf("Você respondeu \"NÃO\" a %d questões.\n", nao);
	printf("Você respondeu \"ÀS VEZES\" a %d questões.\n\n\n", asVezes);
	
	if(sim>=1){
		printf("Você talvez seja viciado em internet. :P\n");
	}
	
	else if(asVezes>=1){
		printf("É bom prestar atenção aos seus hábitos na internet, antes que se tornem mais extremos!  ):<\n");
	}
	
	else{
		printf("Parabéns! Você não é viciado em internet. XD\n");
	}
		
	return 0;
}

