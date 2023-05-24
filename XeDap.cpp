#include "XeDap.h"

void XeDap::Nhap()
{
	Xe::Nhap();
	cout << "Gia thue xe:";
	cin >> giathuexe;
}
void XeDap::Xuat()
{
	Xe::Xuat();
	cout << "Gia thue xe:" << giathuexe << endl;
	cout << "Tien thue xe: " << TinhTienThueXe();
}
int XeDap::TinhTienThueXe()
{
	float n = TinhThoigianThueXe();
	if (n > 1.0)
	{
		return giathuexe + (n - 1) * 8000;
	}
	else
	{
		return (n * giathuexe);
	}
}