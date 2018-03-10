#pragma once
#include <DataStructure/Graph/Graph.h>

class UndirectedGraph : public Graph
{
public:
    UndirectedGraph(u32 num, GraphStorageMode mode);
    virtual ~UndirectedGraph();

    virtual void CreatePath(u32 in, u32 out) override;
    virtual void DestoryPath(u32 in, u32 out) override;
};