#pragma once
#include <Comnmon/Types.h>
#include <DataStructure/Graph/GraphData.h>


enum class GraphType : u8
{
    Directed,
    Undirected
};

enum class GraphStorageMode : u8
{
    AdjacencyMatrix,
    AdjacencyList
};


class Graph
{
protected:
    Graph(u32 num, GraphType type, GraphStorageMode mode);

public:
    virtual ~Graph();

public:
    virtual void CreatePath(u32 in, u32 out) = 0;
    virtual void DestoryPath(u32 in, u32 out) = 0;
    PathState GetPathState(u32 in, u32 out);
protected:
    GraphData * data_;
    GraphType type_;
    GraphStorageMode mode_;
};