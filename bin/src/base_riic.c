#include <stdio.h>
#include <stdlib.h>

// Most efficient trading post team
char trading1_1[10] = "Shamare";
char trading1_2[10] = "Tequila";
char trading1_3[10] = "Bibeak";

// Efficient trading post team
char trading2_1[10] = "Texas";
char trading2_2[10] = "Lappland";
char trading2_3[10] = "Exusiai";

// Least efficient trading post team
char trading3_1[10] = "Gummy";
char trading3_2[10] = "Midnight";
char trading3_3[10] = "Mousse ";

// 3-Slot Factory (EXP)
char bigfact1_1[10] = "Vermeil";
char bigfact1_2[10] = "Ceobe";
char bigfact1_3[11] = "Noir Corne";

char bigfact2_1[10] = "Mizuki";
char bigfact2_2[10] = "Jessica";
char bigfact2_3[10] = "Vanilla  ";

// 2 EXP Factories (2-slot)
char fac2EXP_1[10] = "FEater";
char fac2EXP_2[12] = "Frostleaf";
char fac2EXP_3[10] = "Castle-3";

char fac3EXP_1[10] = "Vigna";
char fac3EXP_2[12] = "Shirayuki";
char fac3EXP_3[11] = "Perfumer";

// 1 Gold Factory
char fac4Gold_1[10] = "Gravel";
char fac4Gold_2[10] = "Haze";
char fac4Gold_3[10] = "Spot";

// 1 Flex-Orirock Factory
char fac5Flex_1[10] = "Lava";
char fac5Flex_2[15] = "Earthspirit";
char fac5Flex_3[10] = "Chestnut";

void main() {
    system("clear");
    printf("                                    R-I-I-C Base Rotations                                        \n\n");
    printf("╔═════════╦════════════════════════════╦════════════════════════════╦════════════════════════════╗\n");
    printf("║         ║      Trading Post #1       ║      Trading Post #2       ║         Dormitory          ║\n");
    printf("╠═════════╬════════════════════════════╬════════════════════════════╬════════════════════════════╣\n");
    printf("║ Start   ║ %s | %s | %s ║ %s | %s | %s ║ %s | %s | %s ║\n", trading1_1, trading1_2, trading1_3, trading2_1, trading2_2, trading2_3, trading3_1, trading3_2, trading3_3);
    printf("║ 12 hrs  ║ %s | %s | %s ║ %s | %s | %s ║                            ║\n", trading1_1, trading1_2, trading1_3, trading2_1, trading2_2, trading2_3);
    printf("║ 24 hrs  ║ %s | %s | %s ║ %s | %s | %s ║ %s | %s | %s ║\n", trading3_1, trading3_2, trading3_3, trading2_1, trading2_2, trading2_3, trading1_1, trading1_2, trading1_3);
    printf("║ 24 hrs  ║ %s | %s | %s ║ %s | %s | %s ║ %s | %s | %s ║\n", trading1_1, trading1_2, trading1_3, trading3_1, trading3_2, trading3_3, trading2_1, trading2_2, trading2_3);
    printf("╚═════════╩════════════════════════════╩════════════════════════════╩════════════════════════════╝\n");
    printf("\n");
    printf("╔════════╦══════════════════════════════╦══════════════════════════════╗\n");
    printf("║        ║        Factory #1 EXP        ║          Dormitory           ║\n");
    printf("╠════════╬══════════════════════════════╬══════════════════════════════╣\n");
    printf("║ Start  ║ %s | %s | %s ║ %s | %s | %s ║\n", bigfact1_1, bigfact1_2, bigfact1_3, bigfact2_1, bigfact2_2, bigfact2_3);
    printf("║ 12 hrs ║ %s | %s | %s ║                              ║\n", bigfact1_1, bigfact1_2, bigfact1_3);
    printf("║ 24 hrs ║ %s | %s | %s ║                              ║\n", bigfact1_1, bigfact1_2, bigfact1_3);
    printf("║ 36 hrs ║ %s | %s | %s ║ %s | %s | %s ║\n", bigfact2_1, bigfact2_2, bigfact2_3, bigfact1_1, bigfact1_2, bigfact1_3);
    printf("╚════════╩══════════════════════════════╩══════════════════════════════╝\n");
    printf("\n");
    printf("╔════════╦══════════════════════╦════════════════╦══════════════════════╦════════════════╗\n");
    printf("║        ║   Factory #2 (EXP)   ║   Dormitory    ║   Factory #3 (EXP)   ║   Dormitory    ║\n");
    printf("╠════════╬══════════════════════╬════════════════╬══════════════════════╬════════════════╣\n");
    printf("║ Start  ║ %s | %s   ║ %s       ║ %s  | %s   ║ %s       ║\n", fac2EXP_1, fac2EXP_2, fac2EXP_3, fac3EXP_1, fac3EXP_2, fac3EXP_3);
    printf("║ 12 hrs ║ %s | %s ║ %s         ║ %s | %s ║ %s          ║\n", fac2EXP_2, fac2EXP_3, fac2EXP_1, fac3EXP_2, fac3EXP_3, fac3EXP_1);
    printf("║ 24 hrs ║ %s | %s    ║ %s      ║ %s | %s     ║ %s      ║\n", fac2EXP_3, fac2EXP_1, fac2EXP_2, fac3EXP_3, fac3EXP_1, fac3EXP_2);
    printf("╚════════╩══════════════════════╩════════════════╩══════════════════════╩════════════════╝\n");
    printf("\n");
    printf("╔════════╦═══════════════════╦═══════════╦═══════════════════════════╦═══════════════╗\n");
    printf("║        ║ Factory #4 (Gold) ║ Dormitory ║ Factory #5 (Flex,Orirock) ║   Dormitory   ║\n");
    printf("╠════════╬═══════════════════╬═══════════╬═══════════════════════════╣═══════════════╣\n");
    printf("║ Start  ║ %s | %s     ║ %s      ║ %s | %s        ║ %s      ║\n", fac4Gold_1, fac4Gold_2, fac4Gold_3, fac5Flex_1, fac5Flex_2, fac5Flex_3);
    printf("║ 12 hrs ║ %s | %s       ║ %s    ║ %s | %s    ║ %s          ║\n", fac4Gold_2, fac4Gold_3, fac4Gold_1, fac5Flex_2, fac5Flex_3, fac5Flex_1);
    printf("║ 24 hrs ║ %s | %s     ║ %s      ║ %s | %s           ║ %s   ║\n", fac4Gold_3, fac4Gold_1, fac4Gold_2, fac5Flex_3, fac5Flex_1, fac5Flex_2);
    printf("╚════════╩═══════════════════╩═══════════╩═══════════════════════════╩═══════════════╝\n");
    printf("\n");
    return;
}