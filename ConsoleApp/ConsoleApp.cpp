#include <stdio.h>
#include <stdlib.h> // Para usar a função system("pause")
#include <locale.h> // Para usar setlocale
#include <Windows.h> // Para usar SetConsoleOutputCP
#include <math.h> // Para usar funções matemáticas

int main() {
    // Definir a codificação do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Definir a localidade para a configuração padrão do sistema
    setlocale(LC_ALL, "");

    int opcao;

    do {
        // Exibir o menu de opções
        printf("\nEscolha uma opcao:\n");
        printf("1.  Soma de Dois Numeros\n");
        printf("2.  Media de Tres Notas\n");
        printf("3.  Conversao de Celsius para Fahrenheit\n");
        printf("4.  Area do Retangulo\n");
        printf("5.  Volume de uma Esfera\n");
        printf("6.  Calculadora de IMC\n");
        printf("7.  Conversao de Horas para Segundos\n");
        printf("8.  Preco Final com Desconto\n");
        printf("9.  Distancia entre Dois Pontos\n");
        printf("10. Tempo Necessario para Percorrer uma Distancia\n");
        printf("0.  Sair\n");
        printf("Opcao: ");
        scanf_s("%d", &opcao);

        // Validar a opção escolhida
        if (opcao < 0 || opcao > 10) {
            printf("\nOpcao invalida! Tente novamente.\n");
            continue;
        }

        // Executar a opção escolhida
        switch (opcao) {

            // Soma de Dois Números
        case 1:
            system("cls");

            // Implementação da soma de dois números aqui
            float num1, num2, soma;
            printf("Digite o primeiro numero: ");
            scanf_s("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf_s("%f", &num2);

            soma = num1 + num2;
            printf("A soma de %.1f e %.1f e %.1f\n", num1, num2, soma);
            break;

            // Média de Três Notas
        case 2:
            system("cls");
            // Implementação da média de três notas aqui
            float nota1, nota2, nota3, media;

            printf("Digite a primeira nota: ");
            scanf_s("%f", &nota1);

            printf("Digite a segunda nota: ");
            scanf_s("%f", &nota2);

            printf("Digite a terceira nota: ");
            scanf_s("%f", &nota3);

            media = (nota1 + nota2 + nota3) / 3;

            printf("A media das notas e: %.1f\n", media);
            break;

            // Conversão de Celsius para Fahrenheit
        case 3:
            system("cls");
            // Implementação da conversão de Celsius para Fahrenheit aqui
            float celsius, fahrenheit;

            printf("Digite a temperatura em graus Celsius: ");
            scanf_s("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("A temperatura em Fahrenheit e: %.1f\n", fahrenheit);

            break;

            // Área do Retângulo
        case 4:
            system("cls");
            // Implementação da área do retângulo aqui

            float base, altura, area;

            printf("Digite a base do retangulo: ");
            scanf_s("%f", &base);

            printf("Digite a altura do retangulo: ");
            scanf_s("%f", &altura);

            area = base * altura;

            printf("A area do retangulo e: %.1f\n", area);
            break;

            // Volume de uma Esfera
        case 5:
            system("cls");
            // Implementação do volume de uma esfera aqui

            double raio, volume;

            printf("Digite o raio da esfera: ");
            scanf_s("%lf", &raio);

            volume = (4.0 / 3.0) * 3.14159 * raio * raio * raio;

            printf("O volume da esfera e: %.1f\n", volume);
            break;

            // Calculadora de IMC
        case 6:
            system("cls");
            // Implementação da calculadora de IMC aqui

            float peso, altura2, imc;

            printf("Digite o seu peso em kg: ");
            scanf_s("%f", &peso);

            printf("Digite a sua altura em metros nesse formato (M,CM): ");
            scanf_s("%f", &altura2);

            imc = peso / (altura2 * altura2);

            printf("O seu IMC e: %.1f\n", imc);
            break;

            // Conversão de Horas para Segundos
        case 7:
            system("cls");
            // Implementação da conversão de horas para segundos aqui

            int horas, minutos, segundos;

            printf("Digite as horas: ");
            scanf_s("%d", &horas);

            printf("Digite os minutos: ");
            scanf_s("%d", &minutos);

            segundos = horas * 3600 + minutos * 60;

            printf("O total de segundos e: %d\n", segundos);
            break;

            // Preço Final com Desconto
        case 8:
            system("cls");
            // Implementação do preço final com desconto aqui

            float preco, desconto, precoFinal;

            printf("Digite o preco do produto: ");
            scanf_s("%f", &preco);

            printf("Digite o desconto em porcentagem (%%): ");
            scanf_s("%f", &desconto);

            precoFinal = preco - (preco * desconto / 100);

            printf("\nValor do Produto: %.2f\n", preco);
            printf("Desconto (%.0f%%): %.2f\n", desconto, (preco * desconto / 100));
            printf("Preco final com desconto: %.2f\n", precoFinal);
            break;

            // Distância entre Dois Pontos
        case 9:
            system("cls");
            // Implementação da distância entre dois pontos aqui

            double x1, y1, x2, y2, distancia;

            printf("Digite as coordenadas do primeiro ponto (x1): ");
            scanf_s("%lf", &x1);

            printf("Digite as coordenadas do primeiro ponto (y1): ");
            scanf_s("%lf", &y1);

            printf("Digite as coordenadas do segundo ponto (x2): ");
            scanf_s("%lf", &x2);

            printf("Digite as coordenadas do segundo ponto (y2): ");
            scanf_s("%lf", &y2);

            distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

            printf("A distancia entre os pontos e: %.2f\n", distancia);
            break;

            // Tempo Necessário para Percorrer uma Distância        
        case 10:
            system("cls");
            // Implementação do tempo necessário para percorrer uma distância aqui

            float velocidade, distancia2, tempo;

            printf("Digite a velocidade media em km/h: ");
            scanf_s("%f", &velocidade);

            printf("Digite a distancia em km: ");
            scanf_s("%f", &distancia2);

            tempo = distancia2 / velocidade;

            printf("O tempo necessario para percorrer a distancia e: %.2f horas\n", tempo);
            break;

            // Sair        
        case 0: // Sair
            printf("\nSaindo...\n");
            break;

            // Aviso caso uma opcao invalida seja escolhida 
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
        }

    } while (opcao != 0);

    system("pause"); // Pausa para exibir o resultado antes de fechar a janela
    return 0;
}