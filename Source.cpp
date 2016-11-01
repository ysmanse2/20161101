#include <iostream>
#include "Vector3D.h"
#include "Matrix3x3.h"
#include "MatrixNxN.h"
#include "VectorND.h"


int main() {
	
	//Vector3D v4(1,2,3);
	//Vector3D v0;

	//v0.x_ = 1;
	//v0.y_ = 2;
	//v0.z_ = 3;

	//Vector3D v0(1, 2, 3);
	//Vector3D v1 = Vector3D(4, 5, 6);
	//Vector3D v2;

	//Vector3D row0, row1, row2;

	//v2 = v0 + v1;

	//std::cout << v2.x_ << " " << v2.y_ << " " << v2.z_ << std::endl;
	//std::cout << v0 *v1 << std::endl;

	//Matrix3x3 m(Vector3D(1, 2, 3), Vector3D(4, 5, 6), Vector3D(7, 8, 9));

	//Vector3D y = m * v0;

	//std::cout << y.x_ << " " << y.y_ << " " << y.z_ << std::endl;



	std::vector<int> values_r1;
	values_r1.push_back(1);
	values_r1.push_back(2);
	values_r1.push_back(3);
	values_r1.push_back(4);
	values_r1.push_back(5);

	VectorND r1(values_r1);

	std::vector<int> values_r2;
	values_r2.push_back(6);
	values_r2.push_back(7);
	values_r2.push_back(8);
	values_r2.push_back(9);
	values_r2.push_back(10);

	VectorND r2(values_r2);

	std::vector<int> values_r3;
	values_r3.push_back(11);
	values_r3.push_back(12);
	values_r3.push_back(13);
	values_r3.push_back(14);
	values_r3.push_back(15);

	VectorND r3(values_r3);

	std::vector<int> values_r4;
	values_r4.push_back(16);
	values_r4.push_back(17);
	values_r4.push_back(18);
	values_r4.push_back(19);
	values_r4.push_back(20);

	VectorND r4(values_r4);

	std::vector<int> values_r5;
	values_r5.push_back(21);
	values_r5.push_back(22);
	values_r5.push_back(23);
	values_r5.push_back(24);
	values_r5.push_back(25);

	VectorND r5(values_r5);

	std::vector<VectorND> rows;
	rows.push_back(values_r1);
	rows.push_back(values_r2);
	rows.push_back(values_r3);
	rows.push_back(values_r4);
	rows.push_back(values_r5);

	MatrixNxN m(rows);


	std::vector<int> values_c;
	values_c.push_back(1);
	values_c.push_back(2);
	values_c.push_back(3);
	values_c.push_back(4);
	values_c.push_back(5);

	VectorND c(values_c);


	VectorND y = m * c;

	for (vector<int>::size_type i = 0; i < y.values_.size(); i++) {
		std::cout << i+1 << " : " << y.values_[i] << std::endl;
	}

	//std::cout << y << std::endl;

	//confirm the result y by online calculator (attach capture images in you report)

	return 0;

}