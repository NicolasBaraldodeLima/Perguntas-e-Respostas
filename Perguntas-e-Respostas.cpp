#include <iostream>
#include <string>

int main() {
	
	int pontuacao = 0;
	
	std::cout << "Bem vindo ao jogo de pergunta  e respostas" << std::endl;
	
	
	std::cout << "Pergunta 1: Qual é a Capital da França" << std::endl;
	std::string resposta1;
	std::getline(std::cin, resposta1);

	
	if (resposta1 == "Paris" || resposta1 == "Paris") {
		std::cout << "Resposta correta! Você ganhou 1 ponto." << std::endl;
	    pontuacao++;
	
	} else {
   std::cout << "Resposta incorreta." << std::endl;
	} 
	
	
	
	
	std::cout << "Pergunta 2: Qual o melhor planenta do sistema solar?" << std::endl;
	std::string resposta2;
	std::getline(std::cin, resposta2);
	
	if (resposta2 == "Júpiter" || resposta2 == "júpiter") {
		
		std::cout << "Resposta correta! Você ganhou 1 ponto." << std::endl;
		pontuacao++;
	} else {
		std::cout<< "Resposta incorreta. A resposta correta é Júpiter.";
	}
	
	
	
	
	std::cout << "Pergunta 3: Qual é a cor do céu em dia claro? " << std::endl;
	std::string resposta3;
	std::getline(std::cin, resposta3);
	
	if (resposta3 == "Azul" || resposta3 == "azul") {
		
		std::cout << "Resposta correta! Você ganhou 1 ponto." << std::endl;
		pontuacao++;
	} else {
		std::cout << "Resposta incorreta. A resposta correta é Azul." << std::endl;
	}
	
	
	
	std::cout<< "Sua pontuação final é: " << pontuacao << "pontos. " << std:: endl;
	
	return 0;
}
