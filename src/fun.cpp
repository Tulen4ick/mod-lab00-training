// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= x;
    }
    return result;
}
