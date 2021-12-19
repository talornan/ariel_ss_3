#include <stdio.h>
#include <string.h>
#include "value.h"
#include <stdlib.h>

#define TXT 1024
#define WORD 30

void Gematria_Sequences(char text[], char word[]){
    printf("Gematria Sequences: ");
    int temp_sum=0 , index=0 , word_val=0 , flag = 0 , i , x;
    for (index=0; index < TXT; index++){
	    if(val(text[index])){
		for (i = index; i < TXT; i++){
		temp_sum += val(text[i]);
			if(temp_sum == word_val){
				if(flag) 
                printf("~");
				for (x=index; x<=i; x++){
				printf("%c" , text[x]);
				}
				flag = 1;
				temp_sum = 0;
				break;
			}
			else if(temp_sum > word_val){
				temp_sum=0;
				break;
			}
		}
    }
}   
}

	
void reverse_the_word(char word[]){
    int i=0;
	int word_len=strlen(word);
    char temp;
	for (i = 0; i < word_len/2; i++)  
    {  
        temp = word[i];  
        word[i] = word[word_len - i - 1];  
        word[word_len - i - 1] = temp;  
    }  
}  

void atbasfunc(char text[] ,char word[]){
    printf("\nAtbash Sequences: ");
    word[strlen(word)-1] = '\0';
    char copyStr [strlen(word)];
    strcpy(copyStr,word);
    reverse_the_word(word);
	int word_index=0;
	int flag = 0;
	for (int index=0; index < TXT; index++){
		//reverse word by atbash
	    if (atbash(text[index]) == word[0] && val(text[index])!=0){
	    	for(int i=index; i<TXT; i++){
			if(val(text[i])==0){
			continue;
			}if(atbash(text[i])==word[word_index]){
			word_index++;
			if(word_index>29||val(word[word_index])==0){
				if(flag) printf("~");
				for (int x=index; x<=i; x++){
				printf("%c" , text[x]);
				}
				flag = 1;
				word_index=0;
				break;
			}
			}else{
			word_index=0;
			break;
			}	
		}
	    }
		//same word by atbash
	    else if(atbash(text[index]) == word[0] && val(text[index])!=0){
		for(int i=index; i<TXT; i++){
			if(val(text[i])==0){
			continue;
			}if(atbash(text[i])==word[word_index]){
			word_index++;
			if(word_index>29||val(word[word_index])==0){
				if(flag) printf("~");
				for (int x=index; x<=i; x++){
				printf("%c" , text[x]);
				}
				flag = 1;
				word_index=0;
				break;
			}
			}else{
			word_index=0;
			break;
			}	
		}
		}
		
		
	}
}
// check if two strings are anagrams
int isAnagram(char* a, char* b) {
    int histogrma[53] = {0};
     for(int i = 1 ; i < strlen(a); i++){
        if(a[i] != ' '){
            histogrma[(int)*(a+i)] += 1;
        }
    }
    for(int i = 1; i < strlen(b); i++){
        if(b[i] != ' '){
            histogrma[(int)*(b+i)] -= 1;
        }
    }
    // if array i still empty then it is anagram and return 1, else return 0
    for(int i = 1; i < 53; i++){
        if(histogrma[i] != 0){
            return 0;
        }
    }
    return 1;
}

   
    void Anagram_Sequences(char text[], char word[]){
        word[strlen(word)-1] = '\0';
        char *begb_ptr, *endb_ptr, *a_ptr;
        begb_ptr = word; 
        char ans[TXT] = "";    

        while(*begb_ptr){
            char helper[TXT] = "";
            int counter = 0; 
            endb_ptr = begb_ptr;
            a_ptr = text;

            // as look as counter is smaller then a keep looping 
        while(counter < strlen(a_ptr)){
        // if pointer is a SPACE and helper is empty break and move pointer forwards
        if(*endb_ptr == 32 && !strlen(helper)){
            break;
        }
        // if pointer value is anything else than SPACE couner ++
        else if (*endb_ptr != 32){
            counter ++;
        }
        // add char to helper and move end pointer forwards
        strncat(helper, endb_ptr,1);
        endb_ptr++;
        
        // if len a is equal to pointer check if they are anagram 
        if(strlen(a_ptr) == counter){
            if(isAnagram(helper, a_ptr)){
                strcat(ans, helper);
                ans[strlen(ans)] = '~';
                counter = 0; 
            }
        }
        
        }
        begb_ptr++;
    }
    // print the anagram; 
    ans[strlen(ans)-1] = '\0'; 
    printf("Anagram Sequences: %s", ans);
}  

    
