#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char wallet[] = "10$ (test)";

    if (argc < 2) {
        printf("Usage: superwallet -trade | -buy | -sell | -price | -online | -cac40\n");
        return 1;
    }

    if (strcmp(argv[1], "-trade") == 0) {
        system("trade.bat");
    } else if (strcmp(argv[1], "-buy") == 0 || strcmp(argv[1], "-sell") == 0) {
        printf("Search for doge-eur to buy or sell\n");
        system("buysell.bat");
    } else if (strcmp(argv[1], "-price") == 0) {
        printf("%s\n", wallet);
    } else if (strcmp(argv[1], "-online") == 0) {
        system("freeview.bat");
    } else if (strcmp(argv[1], "-cac40") == 0)
    {
        system("cac40.bat");
    }
    
    else {
        printf("Unknown command: %s\n", argv[1]);
        printf("Available commands: -trade, -buy, -sell, -price, -online, -cac40\n");
    }

    return 0;
}
