#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void consonants(char *str)
{
    int len = strlen(str);
  for(int i=0; i<len; i++){
  if(str[i] == 'a' || str[i] ==  'A' || str[i] == 'e' || str[i] == 'E' || 
     str[i] == 'i' ||str[i] ==  'I' || str[i] == 'o' ||str[i] ==  'O' || 
     str[i] == 'u' ||str[i] ==  'U') continue;
    else printf("%c", str[i]);
  }
}

int main()
{
    char str[100];
    scanf("%s",str);
    consonants(str);
    return 0;
}


