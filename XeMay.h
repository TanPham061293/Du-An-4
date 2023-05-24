#pragma once
#include"Xe.h"
class XeMay : public Xe
{
private:
	int giathuexe;
	int loaixe;
	string biensoxe;
public:
	void Nhap();
	void Xuat();
	int TinhTienThueXe();
	int Getter_loaixe();
	void Setter_loaixe(int x);
};

