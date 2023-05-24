#include "GioThue.h"

void GioThue::NhapGioThue()
{
	cout << "Gio Thue:";
	cin >> gio;

	cout << "Phut thue:";
	cin >> phut;

	cout << "Giay thue:";
	cin >> giay;

}
void GioThue::XuatGiothue()
{
	cout << "Thoi gian thue:" << gio << ":" << phut << ":" << giay << endl;
}
int GioThue::Getter_gio()
{
	return gio;
}
int GioThue::Getter_phut()
{
	return phut;
}
int GioThue::Getter_giay()
{
	return giay;
}