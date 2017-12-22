#include <stdio.h>
/*
	Comment
*/
void function() {
	char *s="#include <stdio.h>%c/*%c%cComment%c*/%cvoid function() {%c%cchar *s=%c%s%c;%c%cprintf(s, 10, 10, 9, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c}%cint main() {%c%c/*%c%c%cComment%c%c*/%c%cfunction();%c}%c";
	printf(s, 10, 10, 9, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
}
int main() {
	/*
		Comment
	*/
	function();
}
