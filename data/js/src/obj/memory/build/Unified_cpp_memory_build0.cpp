#define MOZ_UNIFIED_BUILD
#include "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozjemalloc.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozjemalloc.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozjemalloc.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif
#include "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozmemory_wrap.cpp"
#ifdef PL_ARENA_CONST_ALIGN_MASK
#error "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozmemory_wrap.cpp uses PL_ARENA_CONST_ALIGN_MASK, so it cannot be built in unified mode."
#undef PL_ARENA_CONST_ALIGN_MASK
#endif
#ifdef INITGUID
#error "/home/hf/Desktop/nnnnn/test02/data/memory/build/mozmemory_wrap.cpp defines INITGUID, so it cannot be built in unified mode."
#undef INITGUID
#endif