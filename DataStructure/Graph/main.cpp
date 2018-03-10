#pragma once
#include <DataStructure/Graph/UndirectedGraph.h>


int main()
{
    Graph* a = new UndirectedGraph(5, GraphStorageMode::AdjacencyMatrix);
    a->CreatePath(1, 2);
    auto p = a->GetPathState(2, 1);
    return 0;
}