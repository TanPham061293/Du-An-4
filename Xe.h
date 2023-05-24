#pragma once
#include"GioThue.h"
#include <string>
#include<ctime>
#pragma warning (disable: 4996)

class Xe
{
protected:
	string hoten;
	GioThue giothuexe;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhTienThueXe();
	float TinhThoigianThueXe();
};

