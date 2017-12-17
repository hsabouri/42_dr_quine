#include <stdio.h>
/*
	Comment
*/
char *s="#include <stdio.h>%c/*%c%cComment%c*/%cchar *s=%c%s%c;%cint main() {%c%c/*%c%c%cComment%c%c*/%c%cprintf(s, 10, 10, 9, 10, 10, 34, s, 34, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c}%c";
int main() {
	/*
		Comment
	*/
	printf(s, 10, 10, 9, 10, 10, 34, s, 34, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
}
