#pragma once
#include "buffers/buffer.h"
#include "buffers/indexbuffer.h"
#include "buffers/vertexAarray.h"

#include "../maths/maths.h"

namespace sparky  { namespace graphics {

	class Renderable2d
	{
	protected:
		maths::vec3 m_Position;
		maths::vec2 m_Size;
		maths::vec4 m_Color;

		VertexArray m_VertexArray;
		IndexBuffer* m_IndexBuffer;
	public:
		Renderable2d(maths::vec3 position, maths::vec2 size, maths::vec4 color)
			: m_Position(position), m_Size(size), m_Color(color)
		{
			m_VertexArray = new VertexArray();
			GLushort indices[] = { 0,1,2,2,3,0 };

			m_IndexBuffer = new IndexBuffer(indices, 6);
		}
	}
} }