#define ENGLISH
#include "gender.h"
#include <stdio.h>

typedef struct {
    char *name;
    gender_t *gender;
} character_t;

char *randomName(character_t *self) {
    return namefromList( namePickList(self->gender->names) );
}

int main (int argc, char **argv) {

    character_t me = {
        .name=NULL, .gender=NULL 
    };

    switch(rand()%3) {
        case 0: me.gender = &manTemplate; break;
        case 1: me.gender = &womantemplate; break;
        case 2: me.gender = &enbyTemplate; break;
    }

    me.name = randomName(&me);

    printf("Hello, my name is %s, and my pronouns are %s\n", me.name, me.gender->formal);

}