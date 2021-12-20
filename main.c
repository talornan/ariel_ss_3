#include "value.h"
int main()
{
    char text[TXT];
    char word[WORD];
    char reverse_word[WORD];
	char ch;
	int  index=0 , flag = 0 , i , x;
    // get word and text
    for (int i = 0; i < WORD; i++)
    {
        scanf("%c", &ch);
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            word[i] = '\0';
            break;
        }
        word[i] = ch;
    }

    for (int i = 0; i < TXT; i++)
    {
        scanf("%c", &ch);
        if (ch == '~')
        {
            text[i] = '\0';
            break;
        }
        text[i] = ch;
    }
   
    Gematria_Sequences(word, text);
    //atbash
	printf("Atbash Sequences :  ");
	//reverse the word
	i=0;
	int word_len=0;
	while(val(word[i])){
		word_len++;
		i++;
	}
	for(i=0; i<word_len; i++){
	reverse_word[i] = word[word_len-i-1];
	}
	//do atbash
	int word_index=0;
	flag = 0;
	for (index=0; index<TXT; index++){
		//reverse word by atbash
	    if (atbash(text[index]) == reverse_word[0] && val(text[index])!=0){
	    	for(i=index; i<TXT; i++){
			if(val(text[i])==0){
			continue;
			}if(atbash(text[i])==reverse_word[word_index]){
			word_index++;
			if(word_index>29||val(reverse_word[word_index])==0){
				if(flag) printf("~");
				for (x=index; x<=i; x++){
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
		for(i=index; i<TXT; i++){
			if(val(text[i])==0){
			continue;
			}if(atbash(text[i])==word[word_index]){
			word_index++;
			if(word_index>29||val(word[word_index])==0){
				if(flag) printf("~");
				for (x=index; x<=i; x++){
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
	printf("\n");
    Anagram_Sequences(text, word);

  
    return 0;
}

