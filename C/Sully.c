#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
    int i = 5;
    if (i == 0)
        return (0);
    char *sfn = "Sully_%d.c";
    char bfn[19];
    sprintf(bfn, sfn, i);
    if (access(bfn, F_OK) != -1) {
        i--;
    }
    sprintf(bfn, sfn, i);
    FILE *fp = fopen(bfn, "w");
    if (!fp) {
        return (1);
    }
    char *ssc = "gcc -Wall -Wextra -Werror -o Sully_%d %s && ./Sully_%d";
    char *sfc = "#include <unistd.h>%c#include <stdlib.h>%c#include <stdio.h>%cint main() {%c%cint i = %d;%c%cif (i == 0)%c%c%creturn (0);%c%cchar *sfn = %c%s%c;%c%cchar bfn[19];%c%csprintf(bfn, sfn, i);%c%cif (access(bfn, F_OK) != -1) {%c%c%ci--;%c%c}%c%csprintf(bfn, sfn, i);%c%cFILE *fp = fopen(bfn, %cw%c);%c%cif (!fp) {%c%c%creturn (1);%c%c}%c%cchar *ssc = %c%s%c;%c%cchar *sfc = %c%s%c;%c%cchar bsc[71];%c%cfprintf(fp,sfc,10,10,10,10,9,i,10,9,10,9,9,10,9,34,sfn,34,10,9,10,9,10,9,10,9,9,10,9,10,9,10,9,34,34,10,9,10,9,9,10,9,10,9,34,ssc,34,10,9,34,sfc,34,10,9,10,9,10,9,10,9,10,9,10,9,9,10,10);%c%csprintf(bsc, ssc, i, bfn, i);%c%cfclose(fp);%c%cif (i > 0)%c%c%csystem(bsc);%c}%c";
    char bsc[71];
    fprintf(fp,sfc,10,10,10,10,9,i,10,9,10,9,9,10,9,34,sfn,34,10,9,10,9,10,9,10,9,9,10,9,10,9,10,9,34,34,10,9,10,9,9,10,9,10,9,34,ssc,34,10,9,34,sfc,34,10,9,10,9,10,9,10,9,10,9,10,9,9,10,10);
    sprintf(bsc, ssc, i, bfn, i);
    fclose(fp);
    if (i > 0)
        system(bsc);
}
