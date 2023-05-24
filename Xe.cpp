#include "Xe.h"

void Xe::Nhap()
{
	rewind(stdin);
	cout << "Nguoi thue xe:";
	getline(cin, hoten);

	giothuexe.NhapGioThue();

}
void Xe::Xuat()
{
	cout << "Nguoi thue xe:" << hoten << endl;
	giothuexe.XuatGiothue();
}
int Xe::TinhTienThueXe()
{
	return 0;
}
float Xe::TinhThoigianThueXe()
{
	time_t t = time(0);
	struct tm* now = localtime(&t);

	return ((float)(now->tm_hour * 3600 + now->tm_min * 60 + now->tm_sec) - (giothuexe.Getter_gio() * 3600 + giothuexe.Getter_phut() * 60 + giothuexe.Getter_giay())) / 3600;
}