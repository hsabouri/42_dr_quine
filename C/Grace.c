#include <stdio.h>
/*
	Comment
*/
#define STAR(x) {}
#define WARS(x) {}
#define FT(x) int main() {char s[]="#include <stdio.h>%c/*%c%cComment%c*/%c#define STAR(x) {}%c#define WARS(x) {}%c#define FT(x) int main() {char s[]=%c%s%c;FILE *fp=fopen(%cGrace_kid.c%c, %cw%c);if(fp != NULL){fprintf(fp, s, 10, 10, 9, 10, 10, 10, 10, 34, s, 34, 34, 34, 34, 34, 10, 10);fclose(fp);}}%cFT(0)%c";FILE *fp=fopen("Grace_kid.c", "w");if(fp != NULL){fprintf(fp, s, 10, 10, 9, 10, 10, 10, 10, 34, s, 34, 34, 34, 34, 34, 10, 10);fclose(fp);}}
FT(0)
