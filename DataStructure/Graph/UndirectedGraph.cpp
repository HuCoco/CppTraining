#include "UndirectedGraph.h"


UndirectedGraph::UndirectedGraph(u32 num, GraphStorageMode mode)
    :Graph(num,GraphType::Undirected,mode)
{

}

UndirectedGraph::~UndirectedGraph()
{

}

void UndirectedGraph::CreatePath(u32 in, u32 out)
{
    data_->Set(in, out, PathState::Existence);
    data_->Set(out, in, PathState::Existence);
}

void UndirectedGraph::DestoryPath(u32 in, u32 out)
{
    data_->Set(in, out, PathState::NonExistence);
    data_->Set(out, in, PathState::NonExistence);
}

