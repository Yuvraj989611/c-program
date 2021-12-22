//INITIALIZAION OF A STRING:
//	A string can be initialized in the following ways:
//		- using char array
			#include <stdio.h>
			int main(){
				char s[10] = {'H', 'e', 'l', 'l', 'o', '\0'}; //<-- Char Array
				//OR char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};
				//s[0] = 'h';
				//s[1] = 'e';
				printf("%s", s);

				return 0;
			}
