#include <stdio.h>
#include <math.h>

int main(){
    // x86-64 int range
    // unsign max = 2^n -1
    // signed min - max = -( 2^n -1 ) to ( (2 ^ n-1 ) -1 )

    printf("char size = %ld bytes or %ld bits\n", sizeof(char), sizeof(char) * 8);
    printf("unsigned char range = 0 to %.0f \n",  pow(2,sizeof(char) * 8)-1);
    printf("signed char range = %.0f to %.0f \n\n",  -(pow(2,(sizeof(char) * 8)-1)), pow(2,(sizeof(char) * 8)-1)-1);

    printf("short size = %ld bytes or %ld bits\n", sizeof(short), sizeof(short) * 8);
    printf("unsigned short range = 0 to %.0f \n",  pow(2,sizeof(short) * 8)-1);
    printf("signed short range = %.0f to %.0f \n\n",  -(pow(2,(sizeof(short) * 8)-1)), pow(2,(sizeof(short) * 8)-1)-1);

    printf("int size = %ld bytes or %ld bits\n", sizeof(int), sizeof(int) * 8);
    printf("unsigned int range = 0 to %.0f\n", pow(2,sizeof(int) * 8)-1);
    printf("signed int range = %.0f to %.0f \n\n",  -(pow(2,(sizeof(int) * 8)-1)), pow(2,(sizeof(int) * 8)-1)-1);

    printf("long size = %ld bytes or %ld bits\n", sizeof(long), sizeof(long) * 8);
    printf("unsigned long range = 0 to %.0f\n", pow(2,sizeof(long) * 8)-1);
    printf("signed long range = %.0f to %.0f \n\n",  -(pow(2,(sizeof(long) * 8)-1)), pow(2,(sizeof(long) * 8)-1)-1);

    printf("long size = %ld bytes or %ld bits\n", sizeof(long), sizeof(long) * 8);
    printf("unsigned long range = 0 to %.0f\n", pow(2,sizeof(long) * 8)-1);
    printf("signed long range = %.0f to %.0f \n\n",  -(pow(2,(sizeof(long) * 8)-1)), pow(2,(sizeof(long) * 8)-1)-1);

    
    return 0;
}