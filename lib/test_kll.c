#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "utest.h"
#include <kll_sketch.h>

UTEST(median, simple_on_million)
{
    KLLSketch *s = kll_sketch_new(1000);

    for (size_t i = 0; i < 1000000; i++)
        kll_sketch_update(s, i);

    //kll_sketch_print(s);
    KLLQuantiles q = kll_sketch_get_quantiles(s);
    double median = kll_sketch_quantiles_query(q, 0.5);
    //printf("%f\n", median);
    ASSERT_TRUE(fabs(500000.0 - median) < 100);
    kll_sketch_free(s);
}

UTEST_MAIN();
