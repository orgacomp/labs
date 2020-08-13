#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>

#include "mm.h"
#include "memlib.h"

// Por favor completar.
team_t team = {
    "gXX",  // Número de grupo,
    "",     // Nombre integrante 1
    "",     // E-mail integrante 1
    "",     // Nombre integrante 2 (si lo hay)
    ""      // E-mail integrante 2 (si lo hay)
};


/*
 * mm_init - initialize the malloc package.
 */
int mm_init(void) {
    return 0;
}


/*
 * mm_malloc - Allocate a block.
 */
void *mm_malloc(size_t size) {
    return NULL;
}

/*
 * mm_free - Freeing a block does nothing.
 */
void mm_free(void *ptr) {
}

/*
 * mm_realloc - Implemented simply in terms of mm_malloc and mm_free
 */
void *mm_realloc(void *ptr, size_t size) {
    return NULL;
}
