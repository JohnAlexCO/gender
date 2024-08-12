#include <string.h>
#define debug_textGendered "    Gendered: "
#define debug_textQueer "    Queer: "
#define debug_5 "Very"
#define debug_4 "Somewhat"
#define debug_3 "A little"
#define debug_2 "Barely"
#define debug_1 "Not really"
void debug_genderPrint(character_t *self) { printf("%s\n",self->gender->name); }
void debug_genderIntroduction(character_t *self) { printf("%s, %s\n",self->gender->name, self->gender->formal); }
void debug_genderVerbose(character_t *self) {
    /* Create a buffer that we'll use to make the string we're going to print */
        int cursor=0; char buffer[1024] = {' '};
    /* The name of the person && their pronouns */
        strcpy(buffer+cursor, self->name); cursor+= strlen(self->name);
        buffer[cursor] = ','; buffer[cursor+1] = ' '; cursor+=2;
        strcpy(buffer+cursor, self->gender->formal); cursor+= strlen(self->gender->formal);
        buffer[cursor] = '\n'; cursor++;
    /* Print, on a 1-5 scale, how gendered they are */
        strcpy(buffer+cursor, debug_textGendered); cursor+= strlen(debug_textGendered);
        if      (self->gender->v_gendered >= 0.08)   { strcpy(buffer+cursor, debug_5); cursor+= strlen(debug_5); }
        else if (self->gender->v_gendered >= 0.06)   { strcpy(buffer+cursor, debug_4); cursor+= strlen(debug_4); }
        else if (self->gender->v_gendered >= 0.04)   { strcpy(buffer+cursor, debug_3); cursor+= strlen(debug_3); }
        else if (self->gender->v_gendered >= 0.02)   { strcpy(buffer+cursor, debug_2); cursor+= strlen(debug_2); }
        else                                        { strcpy(buffer+cursor, debug_1); cursor+= strlen(debug_1); }
        buffer[cursor] = '\n'; cursor++;
    /* Print, on a 1-5 scale, how queer they are */
        strcpy(buffer+cursor, debug_textQueer); cursor+= strlen(debug_textQueer);
        if      (self->gender->v_queer >= 0.08)   { strcpy(buffer+cursor, debug_5); cursor+= strlen(debug_5); }
        else if (self->gender->v_queer >= 0.06)   { strcpy(buffer+cursor, debug_4); cursor+= strlen(debug_4); }
        else if (self->gender->v_queer >= 0.04)   { strcpy(buffer+cursor, debug_3); cursor+= strlen(debug_3); }
        else if (self->gender->v_queer >= 0.02)   { strcpy(buffer+cursor, debug_2); cursor+= strlen(debug_2); }
        else                                     { strcpy(buffer+cursor, debug_1); cursor+= strlen(debug_1); }
        buffer[cursor] = '\n'; cursor++;
    /* Null terminate our string */
        buffer[cursor] = 0;
    /* Change the text color based on gender drift && queerness */
    if ( self->gender->v_current >= 0.0f ) { printf("\033[32m"); }
    else { printf("\033[97m"); } 
    int i=0; for(i=0;i<strlen(buffer);i++) {
        if (self->gender->canEquipProgrammingSocks==true) {
            switch(i%4) { 
                case 0: printf("\033[34m"); break;
                case 1: case 3: printf("\033[35m"); break;
                case 2: printf("\033[97m"); break;
        }}
        printf("%c", buffer[i]);
    }   printf("\033[97m");
}