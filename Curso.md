Comandos e informações úteis para C (Linux)
https://www.ime.usp.br/~pf/algoritmos/apend/compilation.html
gcc -std=c99 -Wall ppp.c qqq.c -o xxx -lm   → Comando para compilar e debugar via terminal

comando linux
sudo apt install inxi
inxi -FxZ


Seção 3
    Aula 9 - Variáveis:
        - A entrada padrão de um computador é o telcado e a saída padrão é o monitor (Serial)
        - printf(" ") -> Função para escrever algo na saída padrão (console)
        - Para declarar uma variável apenas coloque o tipo da variãvel e o nome dela. Ex.: int idade.
        - Para declarar e íniciar uma variável coloce o tipo da variável e o nome dela atribuindo a ela um valor. Ex.: ind idade = 0.
        - Toda linha do programa em C termina em {} ou em ;
        - Se terminar em {} significa que as linhas dentro da {} estão dentro de um bloco de código.
        - Se terminar em ; significa que finaliza um comando.
        - scanf (" ") -> Receber dados do usuário.
        - No scanf o d do %d representa um int.
        
    Aula 10 - O Compilador:
        - Pega o código em texo e compila para a linguagem de máquina, tornando execuável.
        - como compilar um porgrama sem usar uma IDE:
            - Abrir o terminal e digitar o comando gcc <nome do programa.c> -o <nome do programa executavel.exe>
            - Para executar oo programa compilado .exe tem que abrir o terminal e digitar o comando (No linux ou MAC ./<nome dro programa .exe>) no Windows <nome do programa .exe> (Obs.: Por utilizar o GUIT Bash, os comandos do linux funcionam no Windows)

    Aula 11 - A função main()
        - Para ser considerado uma programa em C tem que ter a função main() na estrutura.
        - É a função em que quando o programa compila e executa é função que se inicía.

Seção 4
    Aula 15 - if, else, else if
        -