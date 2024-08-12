gender_t manTemplate = {
    .name = gender_name_m,
    .names = nameflag_npcguy | nameflag_dudebro | nameflag_bozo | nameflag_object,
    .formal = gender_subject_m "/" gender_object_m "/" gender_poss_m,
    .informal = gender_subject_m "/" gender_object_m "/" gender_poss_m "/" gender_subject_e "/" gender_object_e,
    .casual = gender_subject_b "/" gender_object_b "/" gender_poss_b "/" gender_subject_m "/" gender_object_m "/" gender_poss_m "/" gender_subject_e "/" gender_object_e,
    .tuesdays = gender_subject_b "/" gender_object_b "/" gender_poss_b,
    .v_current = -0.4f,
    .v_drift = 0.003f,
    .v_gendered = 1.0f,
    .v_queer = 0.005f, // all dudes are a lil gay
    .canEquipProgrammingSocks = false
};

gender_t womantemplate = {
    .name = gender_name_f,
    .names = nameflag_npcguy | nameflag_dudebro | nameflag_bozo | nameflag_object,
    .formal = gender_subject_f "/" gender_object_f "/" gender_poss_f,
    .informal = gender_subject_f "/" gender_object_f "/" gender_poss_f "/" gender_subject_e "/" gender_object_e,
    .casual = gender_subject_f "/" gender_object_f "/" gender_poss_f "/" gender_subject_e "/" gender_object_e "/" gender_subject_b,
    .tuesdays = gender_subject_b "/" gender_object_b "/" gender_poss_b,
    .v_current = -0.3f,
    .v_drift = 0.004f,
    .v_gendered = 0.95f,
    .v_queer = 0.000f, // drift will affect this don't worry ,)
    .canEquipProgrammingSocks = false
};

gender_t enbyTemplate = {
    .name = gender_name_e,
    .names = nameflag_creature | nameflag_animal | nameflag_object | nameflag_fae | nameflag_clown | nameflag_bozo | nameflag_npcgirl | nameflag_belle | nameflag_npcguy,
    .formal = gender_subject_e "/" gender_object_e "/" gender_poss_e,
    .informal = gender_subject_e "/" gender_object_e "/" gender_subject_f "/" gender_object_f "/" gender_poss_f "/" gender_subject_m "/" gender_object_m "/" gender_poss_m,
    .casual = gender_subject_e "/" gender_object_e "/" gender_subject_b "/" gender_object_b "/" gender_poss_b "/" gender_subject_f "/" gender_object_f "/" gender_poss_f "/" gender_subject_m "/" gender_object_m "/" gender_poss_m,
    .tuesdays = gender_subject_b "/" gender_subject_e "/" gender_object_e "/" gender_object_b "/" gender_poss_b,
    .v_current = 0.6f,
    .v_drift = 0.016f,
    .v_gendered = 0.05f,
    .v_queer = 0.12f,
    .canEquipProgrammingSocks = true
};