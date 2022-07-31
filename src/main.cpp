/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {
	const char* imagename = "F:/blender-data/WL0036/normal_reduce.png";//此处为你自己的图片路径

	//从文件中读入图像
	Mat img = imread(imagename, 1);

	//如果读入图像失败
	if (img.empty()) {
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}
	//显示图像
	imshow("image", img);

	//此函数等待按键，按键盘任意键就返回
	waitKey();
	return 0;
}/
*/

#include <iostream>
#include <Eigen/Dense>
#include <OBJ_Loader.h>
#include <rasterizer.hpp>
#include <triangle.hpp>

int main()
{
	std::vector<Triangle*> TriangleList;
	objl::Loader loader;
	std::string obj_path = "../models/spot/spot_triangulated_good.obj";

	bool loadout = loader.LoadFile(obj_path);

	for (objl::Mesh mesh : loader.LoadedMeshes)
	{
		for (int i = 0; i < mesh.Vertices.size(); i += 3)
		{
			Triangle* t = new Triangle();
			for (int j = 0; j < 3; j++)
			{
				t->setVertex(i + j, Vector4f(mesh.Vertices[i + j].Position.X, mesh.Vertices[i + j].Position.Y, mesh.Vertices[i + j].Position.Z, 1.0));
				t->setNormal(i + j, Vector3f(mesh.Vertices[i + j].Normal.X, mesh.Vertices[i + j].Normal.Y, mesh.Vertices[i + j].Normal.Z));
				t->setTexCoord(i + j, Vector2f(mesh.Vertices[i + j].TextureCoordinate.X, mesh.Vertices[i + j].TextureCoordinate.X));
			}
			TriangleList.push_back(t);
		}
	}

	return 0;
}