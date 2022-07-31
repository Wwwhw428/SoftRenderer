#include <triangle.hpp>

Triangle::Triangle()
{
	v[0] << 0, 0, 0, 1;
	v[1] << 0, 0, 0, 1;
	v[2] << 0, 0, 0, 1;

	normals[0] << 0.0, 0.0, 0.0;
	normals[1] << 0.0, 0.0, 0.0;
	normals[2] << 0.0, 0.0, 0.0;

	tex_coords[0] << 0.0, 0.0;
	tex_coords[1] << 0.0, 0.0;
	tex_coords[2] << 0.0, 0.0;
}

void Triangle::setVertex(int index, Vector4f ver)
{
	v[index] = ver;
}

void Triangle::setNormal(int index, Vector3f nor)
{
	normals[index] = nor;
}

void Triangle::setTexCoord(int index, Vector2f uv)
{
	tex_coords[index] = uv;
}