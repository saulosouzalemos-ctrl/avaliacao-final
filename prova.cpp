#include <iostream>
#include <string>
 
const int MAX_TENTATIVAS = 6;
 
void exibirMenu() {
    std::cout << "===== JOGO DA FORCA =====" << std::endl;
    std::cout << "1 - Jogar" << std::endl;
    std::cout << "2 - Sair" << std::endl;
}
 
bool verificarVitoria(std::string palavraOculta) {
    return palavraOculta.find('_') == std::string::npos;
}
     void jogar() {
    std::string palavra = "PROGRAMAÇÃO";                                
    std::string palavraOculta = "___________";
 
    char letra;
    int tentativas = 6; 
 
  
    while (tentativas > 0) {
        
       
        std::cout << "Palavra: " << palavraOculta << std::endl;
        std::cout << "Tentativas restantes: " << tentativas << std::endl;
        std::cout << "Digite uma letra: ";
        std::cin >> letra;
 
        bool acertou = false;
 
        
        for (int i = 0; i < palavra.length(); i++) {
            if (palavra[i] == toupper(letra)) {
                palavraOculta[i] = palavra[i];
                acertou = true;
            }
        }
 
       
        if (!acertou) {
            tentativas--;
            std::cout << "Letra incorreta!" << std::endl;
        }
 
       
        if (verificarVitoria(palavraOculta)) {
            std::cout << "Palavra: " << palavraOculta << std::endl;
            std::cout << "Parabens! Voce venceu!" << std::endl;
            return; 
        }
    } 
 
    
    std::cout << "Voce perdeu! A palavra era: " << palavra << std::endl;
}
int main() {
    int opcao;
 
    do {
        exibirMenu();
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
 
        if (opcao == 1) {
            jogar();
        }
        else if (opcao == 2) {
            std::cout << "Encerrando..." << std::endl;
        }
        else {
            std::cout << "Opcao invalida!" << std::endl;
        }
 
    } while (opcao != 2);
 
    return 0;
}
 