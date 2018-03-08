#pragma once
#include "GraphMatrix.h"
#include <memory>

GraphMatrix::GraphMatrix(u32 num)
    : num_(num)
{
    data_ = new PathState[num*num];
}

GraphMatrix::~GraphMatrix()
{
    if (data_ != nullptr)
    {
        delete data_;
        data_ = nullptr;
    }
}

PathState GraphMatrix::GetHelper(u32 in, u32 out)
{
    return data_[GetIndexHelper(in, out)];
}

void GraphMatrix::SetHelper(u32 in, u32 out, PathState state)
{
    data_[GetIndexHelper(in, out)] = state;
}
