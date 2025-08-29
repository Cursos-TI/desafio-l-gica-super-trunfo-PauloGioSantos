#include <stdio.h>

// Desafio Super Trunfo - Países - NÍVEL AVENTUREIRO
// Menu Interativo com Escolha de Atributos para Comparação
// Este código implementa um menu usando switch e lógica de comparação com if-else aninhados
// Baseado no código do nível novato
// Autor: Paulo
// Data: 29/08/2025

int main() {
    /* 
     * SEÇÃO 1: DECLARAÇÃO DE VARIÁVEIS
     * 
     * Declaramos todas as variáveis necessárias para armazenar os dados
     * de duas cartas do Super Trunfo conforme especificações do desafio.
     */
    
    // Variáveis para armazenar os dados da Carta 1
    char estado1[3];                // Estado representado por sigla (ex: SP)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    int populacao1;                 // População da cidade
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB da cidade em bilhões
    int pontos_turisticos1;         // Quantidade de pontos turísticos
    float densidade_popul1;         // Densidade populacional (calculada)
    float pib_percapita1;           // PIB per capita (calculado)
    
    // Variáveis para armazenar os dados da Carta 2
    char estado2[3];                // Estado representado por sigla (ex: RJ)
    char codigo2[4];                // Código da carta (ex: B02)
    char cidade2[50];               // Nome da cidade
    int populacao2;                 // População da cidade
    float area2;                    // Área da cidade em km²
    float pib2;                     // PIB da cidade em bilhões
    int pontos_turisticos2;         // Quantidade de pontos turísticos
    float densidade_popul2;         // Densidade populacional (calculada)
    float pib_percapita2;           // PIB per capita (calculado)
    
    // Variável para a escolha do menu
    int opcao_menu;

    // Boas-vindas e instruções para o usuário
    printf("🎮 === SUPER TRUNFO - NÍVEL AVENTUREIRO === 🎮\n\n");
    printf("Bem-vindo ao Super Trunfo interativo!\n");
    printf("Você poderá escolher o atributo para a batalha entre as cartas!\n\n");
    
    /* 
     * SEÇÃO 2: COLETA DE DADOS DA PRIMEIRA CARTA
     * 
     * Solicitamos ao usuário que insira todas as informações
     * necessárias para a primeira carta do Super Trunfo.
     */
    printf("--- 📝 CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo dos valores derivados da Carta 1
    densidade_popul1 = (float)populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Convertendo bilhões para reais
    
    printf("\n");
    
    /* 
     * SEÇÃO 3: COLETA DE DADOS DA SEGUNDA CARTA
     * 
     * Repetimos o mesmo processo para a segunda carta,
     * mantendo a consistência na coleta de dados.
     */
    printf("--- 📝 CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo dos valores derivados da Carta 2
    densidade_popul2 = (float)populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Convertendo bilhões para reais
    
    printf("\n");
    
    /* 
     * SEÇÃO 4: EXIBIÇÃO DOS DADOS DAS CARTAS
     * 
     * Apresentamos de forma organizada todos os dados coletados
     * e calculados para ambas as cartas antes da comparação.
     */
    printf("📋 === CARTAS CADASTRADAS === 📋\n\n");
    
    // Exibição completa da Carta 1
    printf("🃏 Carta 1:\n");
    printf("   Estado: %s\n", estado1);
    printf("   Código: %s\n", codigo1);
    printf("   Cidade: %s\n", cidade1);
    printf("   População: %d habitantes\n", populacao1);
    printf("   Área: %.2f km²\n", area1);
    printf("   PIB: %.2f bilhões de reais\n", pib1);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade_popul1);
    printf("   PIB per Capita: %.2f reais\n", pib_percapita1);
    
    printf("\n");
    
    // Exibição completa da Carta 2
    printf("🃏 Carta 2:\n");
    printf("   Estado: %s\n", estado2);
    printf("   Código: %s\n", codigo2);
    printf("   Cidade: %s\n", cidade2);
    printf("   População: %d habitantes\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: %.2f bilhões de reais\n", pib2);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade_popul2);
    printf("   PIB per Capita: %.2f reais\n", pib_percapita2);
    
    printf("\n");
    
    /* 
     * SEÇÃO 5: MENU INTERATIVO PARA ESCOLHA DO ATRIBUTO
     * 
     * Implementamos um menu usando switch que permite ao jogador
     * escolher qual atributo será usado na comparação das cartas.
     */
    printf("🎯 === MENU DE BATALHA === 🎯\n\n");
    printf("Escolha o atributo para a comparação:\n");
    printf("1. População 👥\n");
    printf("2. Área 📏\n");
    printf("3. PIB 💰\n");
    printf("4. Pontos Turísticos 🏛️\n");
    printf("5. Densidade Populacional 🏙️ (MENOR vence!)\n");
    printf("6. PIB per Capita 💵\n");
    printf("\nDigite sua escolha (1-6): ");
    
    scanf("%d", &opcao_menu);
    
    printf("\n⚔️ === COMPARAÇÃO DE CARTAS === ⚔️\n\n");
    
    /* 
     * SEÇÃO 6: LÓGICA DE COMPARAÇÃO USANDO SWITCH
     * 
     * Utilizamos switch para determinar qual atributo foi escolhido
     * e if-else aninhados para implementar as regras específicas
     * de cada atributo na comparação.
     */
    
    switch(opcao_menu) {
        case 1: // Comparação por População
            {
                printf("Atributo escolhido: POPULAÇÃO 👥\n");
                printf("Regra: Maior população vence!\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
                printf("\n");
                
                if (populacao1 > populacao2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    printf("💪 %s possui %d habitantes a mais que %s.\n", 
                           cidade1, (populacao1 - populacao2), cidade2);
                    
                    // Verificação adicional para vitória esmagadora
                    if ((populacao1 - populacao2) > 1000000) {
                        printf("🔥 VITÓRIA ESMAGADORA! Diferença superior a 1 milhão de habitantes!\n");
                    }
                } 
                else if (populacao2 > populacao1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    printf("💪 %s possui %d habitantes a mais que %s.\n", 
                           cidade2, (populacao2 - populacao1), cidade1);
                    
                    // Verificação adicional para vitória esmagadora
                    if ((populacao2 - populacao1) > 1000000) {
                        printf("🔥 VITÓRIA ESMAGADORA! Diferença superior a 1 milhão de habitantes!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %d habitantes.\n", populacao1);
                }
                break;
            }
            
        case 2: // Comparação por Área
            {
                printf("Atributo escolhido: ÁREA 📏\n");
                printf("Regra: Maior área vence!\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
                printf("\n");
                
                if (area1 > area2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    float diferenca = area1 - area2;
                    printf("💪 %s possui %.2f km² a mais que %s.\n", 
                           cidade1, diferenca, cidade2);
                    
                    // Verificação para área muito grande
                    if (area1 > 10000.0f) {
                        printf("🌍 METRÓPOLE GIGANTE! Área superior a 10.000 km²!\n");
                    }
                } 
                else if (area2 > area1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    float diferenca = area2 - area1;
                    printf("💪 %s possui %.2f km² a mais que %s.\n", 
                           cidade2, diferenca, cidade1);
                    
                    // Verificação para área muito grande
                    if (area2 > 10000.0f) {
                        printf("🌍 METRÓPOLE GIGANTE! Área superior a 10.000 km²!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %.2f km².\n", area1);
                }
                break;
            }
            
        case 3: // Comparação por PIB
            {
                printf("Atributo escolhido: PIB 💰\n");
                printf("Regra: Maior PIB vence!\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
                printf("\n");
                
                if (pib1 > pib2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    float diferenca = pib1 - pib2;
                    printf("💪 %s possui %.2f bilhões a mais de PIB que %s.\n", 
                           cidade1, diferenca, cidade2);
                    
                    // Verificação para PIB muito alto
                    if (pib1 > 100.0f) {
                        printf("💎 POTÊNCIA ECONÔMICA! PIB superior a 100 bilhões!\n");
                    }
                } 
                else if (pib2 > pib1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    float diferenca = pib2 - pib1;
                    printf("💪 %s possui %.2f bilhões a mais de PIB que %s.\n", 
                           cidade2, diferenca, cidade1);
                    
                    // Verificação para PIB muito alto
                    if (pib2 > 100.0f) {
                        printf("💎 POTÊNCIA ECONÔMICA! PIB superior a 100 bilhões!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %.2f bilhões de PIB.\n", pib1);
                }
                break;
            }
            
        case 4: // Comparação por Pontos Turísticos
            {
                printf("Atributo escolhido: PONTOS TURÍSTICOS 🏛️\n");
                printf("Regra: Mais pontos turísticos vence!\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, pontos_turisticos1);
                printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, pontos_turisticos2);
                printf("\n");
                
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    int diferenca = pontos_turisticos1 - pontos_turisticos2;
                    printf("💪 %s possui %d pontos turísticos a mais que %s.\n", 
                           cidade1, diferenca, cidade2);
                    
                    // Verificação para cidade muito turística
                    if (pontos_turisticos1 > 20) {
                        printf("🗺️ DESTINO TURÍSTICO PREMIUM! Mais de 20 pontos turísticos!\n");
                    }
                } 
                else if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    int diferenca = pontos_turisticos2 - pontos_turisticos1;
                    printf("💪 %s possui %d pontos turísticos a mais que %s.\n", 
                           cidade2, diferenca, cidade1);
                    
                    // Verificação para cidade muito turística
                    if (pontos_turisticos2 > 20) {
                        printf("🗺️ DESTINO TURÍSTICO PREMIUM! Mais de 20 pontos turísticos!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %d pontos turísticos.\n", pontos_turisticos1);
                }
                break;
            }
            
        case 5: // Comparação por Densidade Populacional (REGRA INVERTIDA)
            {
                printf("Atributo escolhido: DENSIDADE POPULACIONAL 🏙️\n");
                printf("Regra ESPECIAL: MENOR densidade vence! (Menos aglomeração)\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade_popul1);
                printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade_popul2);
                printf("\n");
                
                // ATENÇÃO: Aqui a regra é INVERTIDA - menor densidade vence!
                if (densidade_popul1 < densidade_popul2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    float diferenca = densidade_popul2 - densidade_popul1;
                    printf("💪 %s tem %.2f hab/km² MENOS que %s (menos aglomerada).\n", 
                           cidade1, diferenca, cidade2);
                    
                    // Verificação para densidade muito baixa (cidade espaçosa)
                    if (densidade_popul1 < 100.0f) {
                        printf("🌿 CIDADE ESPAÇOSA! Densidade muito baixa, excelente qualidade de vida!\n");
                    }
                } 
                else if (densidade_popul2 < densidade_popul1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    float diferenca = densidade_popul1 - densidade_popul2;
                    printf("💪 %s tem %.2f hab/km² MENOS que %s (menos aglomerada).\n", 
                           cidade2, diferenca, cidade1);
                    
                    // Verificação para densidade muito baixa (cidade espaçosa)
                    if (densidade_popul2 < 100.0f) {
                        printf("🌿 CIDADE ESPAÇOSA! Densidade muito baixa, excelente qualidade de vida!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %.2f hab/km².\n", densidade_popul1);
                }
                break;
            }
            
        case 6: // Comparação por PIB per Capita
            {
                printf("Atributo escolhido: PIB PER CAPITA 💵\n");
                printf("Regra: Maior PIB per capita vence!\n\n");
                
                printf("Comparação:\n");
                printf("Carta 1 - %s (%s): %.2f reais per capita\n", cidade1, estado1, pib_percapita1);
                printf("Carta 2 - %s (%s): %.2f reais per capita\n", cidade2, estado2, pib_percapita2);
                printf("\n");
                
                if (pib_percapita1 > pib_percapita2) {
                    printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    float diferenca = pib_percapita1 - pib_percapita2;
                    printf("💪 %s possui %.2f reais a mais per capita que %s.\n", 
                           cidade1, diferenca, cidade2);
                    
                    // Verificação para PIB per capita muito alto
                    if (pib_percapita1 > 100000.0f) {
                        printf("👑 RIQUEZA EXCEPCIONAL! PIB per capita superior a 100 mil reais!\n");
                    }
                } 
                else if (pib_percapita2 > pib_percapita1) {
                    printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    float diferenca = pib_percapita2 - pib_percapita1;
                    printf("💪 %s possui %.2f reais a mais per capita que %s.\n", 
                           cidade2, diferenca, cidade1);
                    
                    // Verificação para PIB per capita muito alto
                    if (pib_percapita2 > 100000.0f) {
                        printf("👑 RIQUEZA EXCEPCIONAL! PIB per capita superior a 100 mil reais!\n");
                    }
                } 
                else {
                    printf("🤝 Resultado: Empate!\n");
                    printf("✨ Ambas as cidades possuem exatamente %.2f reais per capita.\n", pib_percapita1);
                }
                break;
            }
            
        default: // Tratamento de opção inválida (Segurança)
            {
                printf("❌ OPÇÃO INVÁLIDA!\n");
                printf("Por favor, escolha uma opção entre 1 e 6.\n");
                printf("🔄 Execute o programa novamente e selecione uma opção válida.\n\n");
                
                // Como medida de segurança, vamos fazer uma comparação padrão por população
                printf("⚡ Realizando comparação padrão por POPULAÇÃO...\n\n");
                
                printf("Comparação por População (padrão):\n");
                printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
                printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);
                printf("\n");
                
                if (populacao1 > populacao2) {
                    printf("🏆 Carta 1 (%s) venceu por população!\n", cidade1);
                } else if (populacao2 > populacao1) {
                    printf("🏆 Carta 2 (%s) venceu por população!\n", cidade2);
                } else {
                    printf("🤝 Empate em população!\n");
                }
                break;
            }
    }
    
    /* 
     * SEÇÃO 7: ESTATÍSTICAS ADICIONAIS
     * 
     * Fornecemos informações estatísticas complementares
     * sobre a comparação realizada para enriquecer a experiência.
     */
    printf("\n📊 === ESTATÍSTICAS ADICIONAIS === 📊\n");
    
    // Estatísticas gerais das duas cartas
    int populacao_total = populacao1 + populacao2;
    float area_total = area1 + area2;
    float pib_total = pib1 + pib2;
    int pontos_total = pontos_turisticos1 + pontos_turisticos2;
    
    printf("🌍 População total: %d habitantes\n", populacao_total);
    printf("📐 Área total: %.2f km²\n", area_total);
    printf("💰 PIB total: %.2f bilhões de reais\n", pib_total);
    printf("🏛️ Total de pontos turísticos: %d\n", pontos_total);
    
    // Análise comparativa adicional usando if-else aninhados
    printf("\n🔍 === ANÁLISE COMPARATIVA === 🔍\n");
    
    if (populacao1 > populacao2) {
        if (area1 > area2) {
            printf("📈 %s domina em população E área!\n", cidade1);
        } else {
            printf("⚖️ %s tem mais habitantes, mas %s tem maior área.\n", cidade1, cidade2);
        }
    } else if (populacao2 > populacao1) {
        if (area2 > area1) {
            printf("📈 %s domina em população E área!\n", cidade2);
        } else {
            printf("⚖️ %s tem mais habitantes, mas %s tem maior área.\n", cidade2, cidade1);
        }
    } else {
        printf("⚖️ Populações iguais! Comparando áreas...\n");
        if (area1 > area2) {
            printf("📏 %s tem área maior mesmo com população igual.\n", cidade1);
        } else if (area2 > area1) {
            printf("📏 %s tem área maior mesmo com população igual.\n", cidade2);
        } else {
            printf("🎯 População E área são iguais! Cartas muito similares!\n");
        }
    }
    
    /* 
     * SEÇÃO 8: MENSAGEM DE FINALIZAÇÃO
     * 
     * Confirmamos que a comparação foi realizada com sucesso
     * e incentivamos o usuário a experimentar com outras opções.
     */
    printf("\n🎯 === BATALHA CONCLUÍDA === 🎯\n");
    printf("✅ A comparação interativa foi finalizada com sucesso!\n");
    printf("🔄 Execute novamente para testar outros atributos ou outras cartas!\n");
    printf("🎮 Obrigado por jogar Super Trunfo - Nível Aventureiro!\n");
    
    /* 
     * RETORNO DA FUNÇÃO MAIN
     * 
     * Retornamos 0 para indicar que o programa foi executado
     * sem erros e concluído com sucesso.
     */
    return 0;
}