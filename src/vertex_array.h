#pragma once

#include "vertex_buffer.h"
#include "vertex_buffer_layout.h"
#include "index_buffer.h"

class VertexArray
{
public:
    VertexArray();
    ~VertexArray();
    void Bind() const;
    void Unbind() const;
    void AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout, const IndexBuffer& ib);
private:
    unsigned int id_;    
};