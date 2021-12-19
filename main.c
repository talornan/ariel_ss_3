#include <stdio.h>
#include <string.h>
#include "value.h"

#define TXT 1024
#define WORD 30



int main(){
char text[TXT];
char word[WORD];
char ch;
int word_val=0 , i ;
// get word and text
	for (i=0; i<WORD; i++){
	scanf("%c" , &ch);
	if(ch == ' ' || ch == '\t' || ch == '\n') break;
	word[i] = ch;
	word_val += val(ch);
	}
	
	for (i=0; i<TXT; i++){
	scanf("%c" , &ch);
	if(ch == '~') break;
	text[i] = ch;	
	}

char tempWord [WORD];
strcpy(tempWord,word);
char tempText [TXT];
strcpy(tempText,text);
Gematria_Sequences(tempWord, tempText);
strcpy(tempWord, word);
strcpy(tempText, text);
atbasfunc(tempWord, tempText);
strcpy(tempWord, word);
strcpy(tempText, text);
Anagram_Sequences(tempWord, tempText);
return 0; 	
	
}
