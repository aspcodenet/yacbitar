#include <stdio.h> 
#include <stdbool.h>

void printBits(size_t const size, void const* const ptr)
{
    unsigned char* b = (unsigned char*)ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--)
    {
        for (j = 7; j >= 0; j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    printf("\n");
}

//#define MINI_INT char

//    kan du gå igenom MSB & LSB eller missade jag det ?

int main(){
    //int n;
    //scanf -> n
    // 65, 98
    // 010000001
    //char x = 'A'; // 65
    unsigned int talet;
    while(true){
        printf("1. Mata in ett tal\n");        
        printf("2. Skriv ut bittarna\n");        
        printf("3. Set a bit\n");        
        printf("4. Clear a bit\n");        
        printf("Action:");
        int action;
        scanf(" %d",&action);
        if(action == 1){
            printf("Ange ett tal:");
            scanf(" %d", &talet);
        }

    }

    unsigned int v = 0b10010000;
    printf("%d\n",v);
    printBits(sizeof(v),&v);

    //unsigned int v = 12;
    return 0;
}