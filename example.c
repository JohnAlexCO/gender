#define ENGLISH
#include "gender.h"
#include <stdio.h>
#include <time.h>

typedef struct {
    char *name;
    gender_t *gender;
} character_t;


#include "debug/debug.h"

char *randomName(character_t *self) {
    return namefromList( namePickList(self->gender->names) );
}

int main (int argc, char **argv) {

    character_t man_example =   { .name=NULL, .gender=&manTemplate };
    character_t woman_example = { .name=NULL, .gender=&womanTemplate };
    character_t enby_example =  { .name=NULL, .gender=&enbyTemplate };

    srand(clock());

    man_example.name = randomName(&man_example);
    woman_example.name = randomName(&woman_example);
    enby_example.name = randomName(&enby_example);

    debug_genderVerbose(&man_example);
    debug_genderVerbose(&woman_example);
    debug_genderVerbose(&enby_example);

}