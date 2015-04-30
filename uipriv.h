// 6 april 2015
#include <stdlib.h>

extern uiInitOptions options;

// TODO remove the type name arguments
extern void *uiAlloc(size_t, const char *);
#define uiNew(T) ((T *) uiAlloc(sizeof (T), #T ))
extern void *uiRealloc(void *, size_t, const char *);
extern void uiFree(void *);

extern void complain(const char *, ...);

extern uiContainer *newBin(void);
extern void binSetMainControl(uiContainer *, uiControl *);
extern void binSetMargins(uiContainer *, intmax_t, intmax_t, intmax_t, intmax_t);
extern void binSetParent(uiContainer *, uintptr_t);