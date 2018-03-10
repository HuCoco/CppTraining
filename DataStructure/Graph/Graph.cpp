#include "Graph.h"
#include <DataStructure/Graph/GraphList.h>
#include <DataStructure/Graph/GraphMatrix.h>

Graph::Graph(u32 num, GraphType type, GraphStorageMode mode)
    : type_(type)
    , mode_(mode)
{
    switch (mode)
    {
    case GraphStorageMode::AdjacencyMatrix:
        data_ = new GraphMatrix(num);
        break;
    case GraphStorageMode::AdjacencyList:
        data_ = new GraphList(num);
        break;
    default:
        break;
    }
}

Graph::~Graph()
{
    delete data_;
}

PathState Graph::GetPathState(u32 in, u32 out)
{
    return data_->Get(in, out);
}

