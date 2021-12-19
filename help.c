#include <stdio.h>
#include "value.h"

char atbash(char c){
	switch (c) {
	case 'a':
	return 'z';
	case 'A':
	return 'Z';
	
	case 'b':
	return 'y';
	case 'B':
	return 'Y';
	
	case 'c':
	return 'x';
	case 'C':
	return 'X';
	
	case 'd':
	return 'w';
	case 'D':
	return 'W';
	
	case 'e':
	return 'v';
	case 'E':
	return 'V';
	
	case 'f':
	return 'u';
	case 'F':
	return 'U';
	
	case 'g':
	return 't';
	case 'G':
	return 'T';
	
	case 'h':
	return 's';
	case 'H':
	return 'S';
	
	case 'i':
	return 'r';
	case 'I':
	return 'R';
	
	case 'j':
	return 'q';
	case 'J':
	return 'Q';
	
	case 'k':
	return 'p';
	case 'K':
	return 'P';
	
	case 'l':
	return 'o';
	case 'L':
	return 'O';
	
	case 'm':
	return 'n';
	case 'M':
	return 'N';
	
	case 'n':
	return 'm';
	case 'N':
	return 'M';
	
	case 'o':
	return 'l';
	case 'O':
	return 'L';
	
	case 'p':
	return 'k';
	case 'P':
	return 'K';
	
	case 'q':
	return 'j';
	case 'Q':
	return 'J';
	
	case 'r':
	return 'i';
	case 'R':
	return 'I';
	
	case 's':
	return 'h';
	case 'S':
	return 'H';
	
	case 't':
	return 'g';
	case 'T':
	return 'G';
	
	case 'u':
	return 'f';
	case 'U':
	return 'F';
	
	case 'v':
	return 'e';
	case 'V':
	return 'E';
	
	case 'w':
	return 'd';
	case 'W':
	return 'D';
	
	case 'x':
	return 'c';
	case 'X':
	return 'C';
	
	case 'y':
	return 'b';
	case 'Y':
	return 'B';
	
	case 'z':
	return 'a';
	case 'Z':
	return 'A';
	
	default:
	return c;
		}
}

int val(char c){

	switch (c) {
	
	case 'a':
	return 1;
	case 'A':
	return 1;
	
	case 'b':
	return 2;
	case 'B':
	return 2;
	
	case 'c':
	return 3;
	case 'C':
	return 3;
	
	case 'd':
	return 4;
	case 'D':
	return 4;
	
	case 'e':
	return 5;
	case 'E':
	return 5;
	
	case 'f':
	return 6;
	case 'F':
	return 6;
	
	case 'g':
	return 7;
	case 'G':
	return 7;
	
	case 'h':
	return 8;
	case 'H':
	return 8;
	
	case 'i':
	return 9;
	case 'I':
	return 9;
	
	case 'j':
	return 10;
	case 'J':
	return 10;
	
	case 'k':
	return 11;
	case 'K':
	return 11;
	
	case 'l':
	return 12;
	case 'L':
	return 12;
	
	case 'm':
	return 13;
	case 'M':
	return 13;
	
	case 'n':
	return 14;
	case 'N':
	return 14;
	
	case 'o':
	return 15;
	case 'O':
	return 15;
	
	case 'p':
	return 16;
	case 'P':
	return 16;
	
	case 'q':
	return 17;
	case 'Q':
	return 17;
	
	case 'r':
	return 18;
	case 'R':
	return 18;
	
	case 's':
	return 19;
	case 'S':
	return 19;
	
	case 't':
	return 20;
	case 'T':
	return 20;
	
	case 'u':
	return 21;
	case 'U':
	return 21;
	
	case 'v':
	return 22;
	case 'V':
	return 22;
	
	case 'w':
	return 23;
	case 'W':
	return 23;
	
	case 'x':
	return 24;
	case 'X':
	return 24;
	
	case 'y':
	return 25;
	case 'Y':
	return 25;
	
	case 'z':
	return 26;
	case 'Z':
	return 26;
	
	default:
	return 0;
		}
}

int valueOfChar(char c){

	switch (c) {
	
	case 'a':
	return 1;

	case 'b':
	return 2;
	
	case 'c':
	return 3;
	
	case 'd':
	return 4;
	
	case 'e':
	return 5;

	case 'f':
	return 6;
	
	case 'g':
	return 7;

	case 'h':
	return 8;
	
	case 'i':
	return 9;

	case 'j':
	return 10;

	case 'k':
	return 11;
	
	case 'l':
	return 12;
	
	case 'm':
	return 13;
	
	case 'n':
	return 14;
	
	case 'o':
	return 15;
	
	case 'p':
	return 16;
	
	case 'q':
	return 17;
	
	case 'r':
	return 18;
	
	case 's':
	return 19;
	
	case 't':
	return 20;
	
	case 'u':
	return 21;
	
	case 'v':
	return 22;

	case 'w':
	return 23;
	
	case 'x':
	return 24;
	
	case 'y':
	return 25;
	
	case 'z':
	return 26;

	case 'A':
	return 27;

	case 'B':
	return 28;

	case 'C':
	return 29;

	case 'D':
	return 30;
	
	case 'E':
	return 31;

	case 'F':
	return 32;

	case 'G':
	return 33;

	case 'H':
	return 34;

	case 'I':
	return 35;

	case 'J':
	return 36;

	case 'K':
	return 37;

	case 'L':
	return 38;

	case 'M':
	return 39;

	case 'N':
	return 40;

	case 'O':
	return 41;

	case 'P':
	return 42;

	case 'Q':
	return 43;

	case 'R':
	return 44;

	case 'S':
	return 45;

    case 'T':
	return 46;

	case 'U':
	return 47;

	case 'V':
	return 48;

	case 'X':
	return 49;
	
	case 'W':
	return 50;

	case 'Y':
	return 51;

	case 'Z':
	return 52;

	default:
	return 0;
	}
}



