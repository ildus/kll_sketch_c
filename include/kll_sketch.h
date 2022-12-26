#ifndef KLL_SKETCH_H
#define KLL_SKETCH_H

#include <stddef.h>

typedef struct
{
	size_t allocated;
	size_t len;
	double *items;
} KLLSketchCompactor;

typedef struct
{
	size_t k; // k controls the maximum memory used by the stream, which is 3*k + lg(n).
	size_t max_size;
	size_t H; // height of sketch (length of compactors)
	size_t size;
	KLLSketchCompactor ** compactors;
} KLLSketch;

KLLSketch *kll_sketch_new(int k);
void kll_sketch_update(KLLSketch *sketch, double val);
void kll_sketch_free(KLLSketch *sketch);

#endif //KLL_SKETCH_H
