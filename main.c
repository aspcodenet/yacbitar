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




#define BIT_SET(tal, bitNo) ((tal) |= (1ULL << (bitNo)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b)))) 

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
        if(action == 2){
            printf("TALET in BINARY\n");
            printBits(sizeof(talet), &talet);
        }
        if(action == 3){
            // skapa 0x00000001
            //                 0x01101100
            // talet = talet | 0x0001001 -< SIUSTA BITENM ÄR satt
            //                 0x01101101  

            // 0b000010100
            //talet |= (1 << 3) | (1 << 5);
            //BIT_SET(talet,3);
            //BIT_SET(talet,5);

            printf("Enter bitnumber to set\n");
            //
            int bitNo;
            scanf(" %d",&bitNo);
            BIT_SET(talet,bitNo);
            //((talet) |= (1ULL << (bitNo)));
            
        }


    }

    // unsigned int v = 0b10010000;
    // printf("%d\n",v);
    // printBits(sizeof(v),&v);

    //unsigned int v = 12;
    return 0;
}