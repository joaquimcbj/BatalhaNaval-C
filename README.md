Batalha Naval - Nível Novato
Este projeto implementa a lógica inicial de um jogo de Batalha Naval em C, focando na manipulação de matrizes e organização modular por meio de funções.

🚀 Funcionalidades
Tabuleiro 10x10: Representado por uma matriz bidimensional inicializada com 0 (Água).

Posicionamento de Navios: Funções para inserir navios de tamanho fixo (3 posições) nas orientações horizontal e vertical.

Validação de Limites: Garante que os navios sejam posicionados dentro das fronteiras do tabuleiro para evitar erros de memória.

Exibição no Console: Mostra o estado atual da matriz, utilizando o valor 3 para identificar os navios.

🛠️ Estrutura Técnica
Modularização: Código dividido em funções específicas para inicializar, posicionar e exibir o tabuleiro.

Constantes: Uso de #define para facilitar ajustes no tamanho do tabuleiro e dos navios.

Lógica: Utilização de loops for aninhados para percorrer e imprimir a matriz de forma organizada.
gcc main.c -o batalhanaval
Execute o programa:

Bash
./batalhanaval
