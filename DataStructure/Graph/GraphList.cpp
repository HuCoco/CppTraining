#pragma once
#include "GraphList.h"

GraphList::GraphList(u32 num)
    : num_(num)
{
    data_ = new GraphListNode[num];
}

GraphList::~GraphList()
{
    for(u32 i = 0; i < num_; ++i)
    {
        GraphListNode* cur = &data_[i];
        while (cur != nullptr)
        {
            GraphListNode* node = cur->next;
            cur = node->next;
            delete node;
            node = nullptr;
        }
    }

    delete data_;
}

PathState GraphList::GetHelper(u32 in, u32 out)
{
    GraphListNode* cur = data_[in].next;
    while (cur != nullptr)
    {
        if (cur->index == out)
        {
            return PathState::Existence;
        }
        else
        {
            cur = cur->next;
        }
    }

    return PathState::NonExistence;
}

void GraphList::SetHelper(u32 in, u32 out, PathState state)
{
    GraphListNode* cur = &data_[in];

    switch (state)
    {
    case PathState::Existence:
    {
        while (cur != nullptr)
        {
            if(cur->next == nullptr)
            {
                GraphListNode* node = new GraphListNode;
                node->index = out;
                node->next = nullptr;
                cur->next = node;
                break;
            }

            if (cur->index == out)
            {
                break;
            }

            cur = cur->next;
            
        }
    }
        break;
    case PathState::NonExistence:
    {
        while (cur != nullptr)
        {
            if (cur->next->index == out)
            {
                GraphListNode* node = cur->next;
                cur->next = node->next;
                delete node;
                node = nullptr;
            }
        }
    }
        break;
    default:
        break;
    }
}
