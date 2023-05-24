#include "Tong.h"

void Tong::NhapThongTin()
{
	char luachon;
	do
	{
		cout << "============ Menu ============\n";
		cout << "1. Cho thue xe dap:\n";
		cout << "2. Cho thue xe may.\n";
		cout << "3. Thoat.\n";
		cout << endl << endl;
		cout << "Lua chon cua ban:";
		cin >> luachon;
		Xe *x;
		if (luachon =='1')
		{
			x = new XeDap;
			x->Nhap();
			arr.push_back(x);
		}
		else if (luachon == '2')
		{
			x = new XeMay;
			x->Nhap();
			arr.push_back(x);
		}
		else if (luachon != '3')
		{
			cout << "Lua chon khong phu hop. Xin kiem tra lai.\n";
		}
	} while (luachon != '3');
}
void Tong::XuatThongTin()
{
	int n = arr.size();
	for (int i = 0; i < n; i++)
	{
		cout << "Nguoi thue :" << i + 1 << endl;
		arr[i]->Xuat();
	}
}
int Tong::TinhTongTienThueXe()
{
	int n = arr.size();
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += arr[i]->TinhTienThueXe();
	}
	return tong;
}