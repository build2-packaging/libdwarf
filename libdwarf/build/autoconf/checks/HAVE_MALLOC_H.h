// HAVE_MALLOC_H

#undef HAVE_MALLOC_H

/* Check for the <malloc.h> header.
 *
 * Available on Linux/glibc and Windows (MSVC, MinGW). Not available on
 * macOS/Darwin (which uses <malloc/malloc.h> instead).
 */
#if defined(__linux__) || defined(_WIN32)
#  define HAVE_MALLOC_H 1
#endif
