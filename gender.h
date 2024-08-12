#include <stdlib.h>
#include <stdbool.h>
#include "locale/locale.h"

typedef struct {
// for good localization, we recommend using a #define name and putting localized versions in the appropriate strings file in "locale/{language}/genders.h"
     char *name;
// bit-field, enable different name lists for random names, see "local/names.h" for the flags of different namelists
    long long int names;
// syntax "he/him", list in preferred order with commas or slashes between
    char *formal;
    char *informal;
    char *casual;
    char *tuesdays; // if you have never read Tuesdays With Morrey, please read Tuesdays With Morrey before defining a new gender template
// used for conveying how polar this gender is along our bimodal set. between -1 and 1
    float v_current;
    float v_drift; // used to decide how much this gender is allowed to change over deltaTime, cis characters usually fall around 0.002
    float v_gendered; // higher is more gendered, lower is less gendered
    float v_queer; // higher is more likely to self-identify as lgbtq
    bool canEquipProgrammingSocks;
} gender_t;
/* when generating new characters, clone a reference gender object. make sure to call updateGender(character_t *self) during encounters and any time you are exposed to Rust code */

#include "templates/templates.h"
#include "gender.c"