#pragma once
#include <DataStructure/Graph/GraphData.h>


class GraphList : public GraphData
{
public:
    GraphList(u32 num);
    virtual ~GraphList() override;
protected:
    virtual PathState GetHelper(u32 in, u32 out) override;
    virtual void SetHelper(u32 in, u32 out, PathState state) override;

private:
    struct GraphListNode
    {
        u32 index = 0xffffffff;
        GraphListNode* next = nullptr;
    };

    GraphListNode* data_;
    u32 num_;
};