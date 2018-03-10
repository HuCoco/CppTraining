#pragma once
#include <Comnmon/Types.h>

enum class PathState : u8
{
    Existence = 1 << 0,
    NonExistence = 1 << 1
};

class GraphData
{
protected:
    GraphData() = default;
public:
    virtual ~GraphData() = default;
public:
    inline PathState Get(u32 in, u32 out) { return GetHelper(in, out); }
    inline void Set(u32 in, u32 out, PathState state) { SetHelper(in, out, state); }
protected:
    virtual PathState GetHelper(u32 in, u32 out) = 0;
    virtual void SetHelper(u32 in, u32 out, PathState state) = 0;
};