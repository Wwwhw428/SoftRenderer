#include <Eigen/Dense>

using namespace Eigen;

class Triangle
{
public:
	Triangle();
	
	Vector4f v[3];
	Vector3f normals[3];
	Vector4f color[3];
	Vector2f tex_coords[3];

	void setVertex(int index, Vector4f ver);
	void setNormal(int index, Vector3f nor);
	void setTexCoord(int index, Vector2f uv);





};