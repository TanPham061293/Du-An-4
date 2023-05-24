#include"Tong.h"

int main()
{
	Tong *a;
	a = new Tong;
	a->NhapThongTin();
	a->XuatThongTin();
	cout << "Tong tien thue xe la:" << (size_t)a->TinhTongTienThueXe() << endl;
	system("pause");
	return 0;
}