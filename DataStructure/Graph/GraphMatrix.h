#pragma once
#include <DataStructure/Graph/GraphData.h>


class GraphMatrix : public GraphData
{
public:
    GraphMatrix(u32 num);
    virtual ~GraphMatrix() override;
protected:
    virtual PathState GetHelper(u32 in, u32 out) override;
    virtual void SetHelper(u32 in, u32 out, PathState state) override;
    inline u32 GetIndexHelper(u32 in, u32 out) { return (in * num_) + out; }
private:
    PathState* data_;
    u32 num_;
};
