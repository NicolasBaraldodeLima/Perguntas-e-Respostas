#include <iostream>
#include <string>

int main() {
	
	int pontuacao = 0;
	
	std::cout << "Bem vindo ao jogo de pergunta  e respostas" << std::endl;
	
	
	std::cout << "Pergunta 1: Qual � a Capital da Fran�a" << std::endl;
	std::string resposta1;
	std::getline(std::cin, resposta1);

	
	if (resposta1 == "Paris" || resposta1 == "Paris") {
		std::cout << "Resposta correta! Voc� ganhou 1 ponto." << std::endl;
	    pontuacao++;
	
	} else {
   std::cout << "Resposta incorreta." << std::endl;
	} 
	
	
	
	
	std::cout << "Pergunta 2: Qual o melhor planenta do sistema solar?" << std::endl;
	std::string resposta2;
	std::getline(std::cin, resposta2);
	
	if (resposta2 == "J�piter" || resposta2 == "j�piter") {
		
		std::cout << "Resposta correta! Voc� ganhou 1 ponto." << std::endl;
		pontuacao++;
	} else {
		std::cout<< "Resposta incorreta. A resposta correta � J�piter.";
	}
	
	
	
	
	std::cout << "Pergunta 3: Qual � a cor do c�u em dia claro? " << std::endl;
	std::string resposta3;
	std::getline(std::cin, resposta3);
	
	if (resposta3 == "Azul" || resposta3 == "azul") {
		
		std::cout << "Resposta correta! Voc� ganhou 1 ponto." << std::endl;
		pontuacao++;
	} else {
		std::cout << "Resposta incorreta. A resposta correta � Azul." << std::endl;
	}
	
	
	
	std::cout<< "Sua pontua��o final �: " << pontuacao << "pontos. " << std:: endl;
	
	return 0;
}
