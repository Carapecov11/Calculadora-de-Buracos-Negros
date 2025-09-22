#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const double G = 6.674e-11; //Constante Gravitacional, sem notação fica: 0.00000000006674
    const double MASSA_SOL = 1.989e30; //Massa do Sol, sem notação fica: 1.000.000.000.000.000.000.000.000.000.000
    double V, R, Massa, Massa_Solar; //Entrada do Progama
    
    printf("========================================\n\n");
    printf("CALCULADORA DE MASSA DE BURACOS NEGROS\n\n");
    printf("========================================\n\n");
    
    printf("Digite a Velocidade Orbital (M/S): \n"); //Metros por segundo
    scanf("%lf", &V);
    printf("Digite a Distancia Orbital (M): \n"); //Distancia em Metros
    scanf("%lf", &R);
    
    Massa = (V * V * R) / G; //Fórmula de Newnton
    Massa_Solar = Massa / MASSA_SOL;
    
    printf("- Em kg: %.3e kg\n", Massa);
    printf("- Em massas solares: %.2lf M_sol\n\n", Massa_Solar);

    //Classificações:

    if (Massa_Solar <= 1 )
    {
        printf("\nClassificacao: Pequeno demais para ser um Buraco Negro, e uma estrela de Neutrons!\n");
    }
    else if (Massa_Solar >= 1  &&  Massa_Solar <= 3) 
    {
        printf("\nClassificacao: Limite bem Inferior, possivelmente uma Estrela de Neutrons mais Massiva, porem ainda nao e um Buraco Negro.\n");
    }
    else if (Massa_Solar >= 3  &&  Massa_Solar <= 100) 
    {
        printf("\nClassificacao: Buraco Negro de Massa Estelar, semelhante ao Buraco Negro da Galaxia do Cisne, Cygnus X-1.\n");
    }
    else if (Massa_Solar >= 100  &&  Massa_Solar <= 100000)
    {
        printf("\nClassificacao: Buraco Negro Intermediario, semelhante ao M82 - X1, presente na Galaxia de M82 ou HLX-1, da Galaxia de ESO 243-49.\n");
    } 
    else if (Massa_Solar >= 100000 &&  Massa_Solar <= 10000000000) //1×1010 = 10000000000
    {
        printf("\nBuraco Negro SuperMassivo, semelhante ao Buraco Negro da nossa Galaxia, o Sagitário A*, ou maior ainda, M87 na constelacao de Virgem\n");
    }
    else if (Massa_Solar > 10000000000) 
    {
        printf("\nClassificacao: UltraMassivos! Ah meu Parceiro, ai ja sao Buracos Negros do Tamanho de Galaxias!\n");
        printf("\nEle provavelmente alimenta um quasar, que e literalmente um motor de uma Galaxia, usando como referencia o TON 618 e o maior de todos o PHOENIX A Estrela!\n");
    }
    else {
        printf("Classificacao invalida!");
    }
    return 0;
}

