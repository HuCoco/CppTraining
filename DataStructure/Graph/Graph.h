#pragma once
#include <Comnmon/Types.h>

class Graph
{
protected:
    Graph() = default;
    virtual ~Graph() = default;

public:
    virtual void CreatePath(u32 in, u32 out) = 0;
    virtual void DestoryPath(u32 in, u32 out) = 0
};