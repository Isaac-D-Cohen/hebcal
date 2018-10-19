/*
 * DO NOT EDIT THIS FILE!
 * Generated by ./po2gperf.pl
 */
#ifndef __HEBCAL_TRANSLATIONS__
#define __HEBCAL_TRANSLATIONS__

struct event_title { char *name; char *dest; };

const char * lookup_translation(const char *s);

typedef enum hebcal_lang_e {
    HEBCAL_LANG_DEFAULT,
    HEBCAL_LANG_ASHKENAZI,
    HEBCAL_LANG_ASHKENAZI_LITVISH,
    HEBCAL_LANG_ASHKENAZI_POYLISH,
    HEBCAL_LANG_ASHKENAZI_STANDARD,
    HEBCAL_LANG_FI,
    HEBCAL_LANG_FR,
    HEBCAL_LANG_HE,
    HEBCAL_LANG_PL,
    HEBCAL_LANG_RU,
    HEBCAL_LANG_UNDEFINED
} hebcal_lang;

void hebcal_set_language(hebcal_lang lang);

hebcal_lang hebcal_get_language(const char *locale);

#endif /* __HEBCAL_TRANSLATIONS__ */
