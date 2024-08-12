#include "names.h" // contains the flags for namelists, not the values themselves
#ifdef ENGLISH
    #define language
    #include "./english/english.h"
#endif
#ifdef FRANÇAIS
    #define language
    #include "./francais/francais.h"
#endif

#ifndef language 
    #error "error compiling `gender`: please choose a language"
#endif 