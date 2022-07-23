#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c=0,f=0;
    char str[256]={'\0'},word[256]={'\0'};
    gets(str);
    gets(word);
    if(!(strlen(word) && strlen(str))){
        printf("invalid input");
        return 0;
        }
    for(int j=0;j<=strlen(str)-strlen(word);j++){
        if(str[j] == word[0]){
            c = 0;
            for(int i=0;i<strlen(word);i++){
                if(str[j+i] == word[i])
                    c++; 
                else{
                    break;
                }
            }
            if(c == (strlen(word))){
                printf("Occurrence at index %d\n",j);
                f++;
            }
       }else
            continue;
    }if(strlen(word) && strlen(str))
        printf("Total number of occurrences = %d",f);
    
    
    
    
    return 0;
}
