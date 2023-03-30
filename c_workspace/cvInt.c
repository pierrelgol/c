#include <stdio.h>
#include <stdlib.h>

long long int abs_val_of(long long int source){

 if (source < 0) {
  source *= -1;
 }

 return source;
}

  
long long int get_reverse(long long int source){

 long long int reverse = 0;
  
  if ( source == 0 ){
    printf("Wrong input\n");
    return 0;
  }

  while (source != 0) {
    reverse *= 10;
    reverse += source % 10;
    source /= 10;
  }

  return reverse;
}
 

 long long int convert_to_base(int source, int to_base){
  
  long long int abs_val_of(long long int source);
  long long int reverse(long long int source); 
  
  long long int converted_src = 0;
  int base = to_base;
  
  if ( source == 0 ){
    printf("Wrong input\n");
    return 0;
  }

  while (source != 0) {
    converted_src *= 10;
    converted_src += abs_val_of(source) % base;
    source /= base;
  }

  return get_reverse(converted_src);
}

char* int_to_hex(int source) {
    char* hex_str = malloc(sizeof(char) * 9);
    int i = 7;
    while (source != 0 && i >= 0) {
        int remainder = source % 16;
        if (remainder < 10) {
            hex_str[i--] = remainder + '0';
        } else {
            hex_str[i--] = remainder - 10 + 'a';
        }
        source /= 16;
    }
    while (i >= 0) {
        hex_str[i--] = '0';
    }
    hex_str[8] = '\0'; // Add null
    return hex_str;
}
