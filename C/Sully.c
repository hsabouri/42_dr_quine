#include<stdio.h>
int main() {
	char *s = "#include<stdio.h>%cint main() {%c%cchar *s = %c%s%c;%c%cint i = %d;%c%cwhile (i > 0 && i--) {%c%c%cchar *s2 = %c%s%c;%c%c%cchar fn[19];%c%c%csprintf(fn, s2, i);%c%c%cFILE *fp = fopen(fn, %cw%c);%c%c%cif (fp != NULL) {%c%c%c%cfprintf(fp, s, 10, 10, 9, 34, s, 34, 10, 9, i, 10, 9, 10, 9, 9, 34, s2, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 9, 10, 9, 9, 10, 9, 10, 10);%c%c%c}%c%c}%c}%c";
	int i = 5;
	while (i > 0 && i--) {
		char *s2 = "Sully_%d.c";
		char fn[19];
		sprintf(fn, s2, i);
		FILE *fp = fopen(fn, "w");
		if (fp != NULL) {
			fprintf(fp, s, 10, 10, 9, 34, s, 34, 10, 9, i, 10, 9, 10, 9, 9, 34, s2, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 9, 10, 9, 9, 10, 9, 10, 10);
		}
	}
}
