#include "XeMay.h"

void XeMay::Nhap()
{
	char luachon;
	Xe::Nhap();
	do
	{
		cout << "======Menu phan khoi xe ======\n";
		cout << "1. Loai 100 phan khoi.\n";
		cout << "2.Loai 150 phan khoi.\n";
		cout << "Vui long chon phan khoi xe:";
		cin >> luachon;
		
		if (luachon < '1' || luachon > '2')
		{
			cout << "Lua chon khong phu hop. Xin kiem tra lai.\n";
		}
	} while (luachon < '1' || luachon > '2');
	
	if (luachon == '1')
	{
		Setter_loaixe(100);
	}
	else if (luachon == '2')
	{
		Setter_loaixe(150);
	}

	cout << "Gia thue xe:";
	cin >> giathuexe;

	rewind(stdin);
	cout << "Bien so xe:";
	getline(cin, biensoxe);

}
void XeMay::Xuat()
{
	Xe::Xuat();
	cout << "Loai xe:" << loaixe << " phan khoi.\n";
	cout << "Gia thue xe:" << giathuexe << endl;
	cout << "Bien so xe:" << biensoxe << endl;
	cout << "Tien thue xe: " << TinhTienThueXe();
}
int XeMay::TinhTienThueXe()
{
	float n = TinhThoigianThueXe();
	if (Getter_loaixe() == 100)
	{
		if (n > 1)
		{
			return giathuexe + (n - 1) * 100000;
		}
		return n * giathuexe;
	}
	else if (Getter_loaixe() == 150)
	{
		if (n > 1)
		{
			return giathuexe + (n - 1) * 100000;
		}
		return n * giathuexe;
	}
}
int XeMay::Getter_loaixe()
{
	return loaixe;
}
void XeMay::Setter_loaixe(int x)
{
	loaixe = x;
}