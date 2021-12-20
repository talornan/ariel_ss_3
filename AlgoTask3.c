  
#include "value.h"
char atbash(char c)
{
    return ((isalpha(c) > 0) ? ((isupper(c) != 0) ? (91 - (c - 64)) : (123 - (c - 96))) : 0);
}
int val(char c)
{
    return ((isalpha(c) > 0) ? ((isupper(c) != 0) ? (c - 64) : (c - 96)) : 0);
}
int valueOfChar(char c)
{
    return ((isalpha(c) > 0) ? ((isupper(c) != 0) ? (c - 64 + 26) : (c - 96)) : 0);
}

void Gematria_Sequences(char word[], char text[]){
    int i = 0; 
    int temp_sum = 0; 
    while(word[i]){
        temp_sum += val(word[i]);
        i++;
    } 
    char str[TXT] = "", *start, *str_ptr;
    start = text;
    int sum_word = 0;
    i = 1;
    while(*start){
        char str[TXT] = "";
        str_ptr = str;
        strncpy(str, start, i);
        str_ptr = str;
        if(!val(str[0])){
            start++;
        }
        else{
            while(*str_ptr){
                sum_word += val(*str_ptr);
                ++str_ptr;
            }
            if( i > strlen(start)){
                break;
            }
            if(sum_word < temp_sum){
                i++;
                str_ptr = str;
                sum_word = 0;
            }
            else if(sum_word > temp_sum){
                start++;
                sum_word = 0;
                i = 1; 
            }
            else{
                strcat(str, str);
                int len = strlen(str);
                str[len] = '~';
                sum_word = 0;
                start++;
                i = 1;
            }
        }
    }
    str[strlen(str)-1] = '\0';
    printf("Gematria Sequences: %s\n", str);
}

void Anagram_Sequences(char *text, char *word)
{
    printf("Anagram Sequences: ");
    char *big_loop = (char *)malloc((sizeof(char) * TXT) + 1);
    char *temp_word = (char *)malloc((sizeof(char) * WORD) + 1);
    char *small_loop = (char *)malloc((sizeof(char) * TXT) + 1);
    strcpy(temp_word, word);
    strcpy(big_loop, text);

    int word_lenght = strlen(temp_word), text_counter = 0, anagram_index = 0, flag = 0;
    int ascii[256] = {0};
    char anagram_word[TXT];
    int i = 0;

    //init chars array counter
    while (*(temp_word + i) != '\0')
    {
        char c=*(temp_word + i);
        ascii[c]++;
        i++;
    }
    i = 0;
    char ch;
    while ((ch = *(big_loop + i)) != '\0')
    {
        if( ch != ' ')
        {
            //printf("1");
            //init small loop veriables
            small_loop = big_loop;
            text_counter = 0;
            memset(anagram_word, 0, sizeof(anagram_word));
            anagram_index = 0;
            int copy_ascii[256];
            for (int i = 0; i < 256; i++)
            {
                copy_ascii[i] = ascii[i];
            }
            while (text_counter < word_lenght && *small_loop != '~')
            {
                if (copy_ascii[(int)*small_loop] == 0 && *small_loop != ' ')
                {
                    big_loop++;
                    break;
                }
                if (*small_loop == ' ')
                {
                  
                    anagram_word[anagram_index] = *small_loop;
                    anagram_index++;
                    small_loop++;
                }
                else
                {
               
                    anagram_word[anagram_index] = *small_loop;
                    anagram_index++;
                    copy_ascii[(int)*small_loop] -= 1;
                    text_counter++;
                    small_loop++;
                }
            }
            if (text_counter == word_lenght)
            {
                
                if (flag)
                    printf("~");
                printf("%s", anagram_word);
                flag = 1;
                big_loop++;
            }
        }
        else
        {
            big_loop++;
        }
    }
}

     
  

    
