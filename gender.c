char **namePickList(int nameflags) {
    int i; int length=0; int lists[30] = { -1 };
    for (int i = 0; i < 30; i++) {
    if (nameflags & (1 << i)) {
        lists[length] = 1 << i;
        length++;
    }}
    int choice = ( lists[rand()%length] );
    switch(choice) {
    case nameflag_npcguy:       return names_dudebro;
    case nameflag_npcgirl:      return names_npcgirl;
    case nameflag_dudebro:      return names_npcguy;
    case nameflag_bozo:         return names_bozo;
    case nameflag_clown:        return names_clown;
    case nameflag_fae:          return names_fae;
    case nameflag_creature:     return names_creature;
    case nameflag_object:       return names_object;
    case nameflag_animal:       return names_animal;
    case nameflag_belle:        return names_belle;
    }
}

char *namefromList(char **list) {
    int length=0; while(list[length][0]!=0) {length++;}
    int choice = rand()%length;
    return list[choice];
}