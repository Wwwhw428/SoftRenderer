#pragma once

#include <Eigen/Dense>
#include <algorithm>
#include <vector>

using namespace Eigen;

namespace rst
{
	enum class Buffers
	{
		Color = 1,
		Depth = 2
	};

	/*inline Buffers operator|(Buffers a, Buffers b)
	{
		return Buffers((int)a | (int)b);
	}*/

	class Rasterizer
	{
	public:
		Rasterizer(int w, int h);

		void clear(Buffers buffer);

	private:
		void draw_line(Vector3f begin, Vector3f end);
		//void draw();

	private:
		int width, height;

		std::vector<Vector4f> frame_buf;
		std::vector<float> depth_buf;
	};
}

