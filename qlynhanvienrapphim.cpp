#include<iostream>
#include<string>
#include"nhanvien.h"

using namespace std;





//========================================================================

//class LuongPT
LuongPartTime::LuongPartTime()  //ham tao
{
	thuong = 0;
	sogio = 0;

}

LuongPartTime::~LuongPartTime() //ham huy
{

}

void LuongPartTime::nhap() {
	cout << "Tien thuong them : ";
	cin >> thuong;
	cout << "So gio lam cua nhan vien : ";
	cin >> sogio;
}

int LuongPartTime::luong()
{
	return (20000 * sogio) + thuong;
}

void LuongPartTime::xuat() {
	cout << "Tien luong nhan vien : " << luong() << "VND" << endl;
}
//================================================================================

//class LuongFT
LuongFullTime::LuongFullTime() {               //ham tao
	songaynghi = 0;
	tienthuong = 0;
}

LuongFullTime::~LuongFullTime() {           //ham huy

}

void LuongFullTime::nhap() {
	cout << "Tien thuong : ";
	cin >> tienthuong;
	cout << "So ngay nghi : ";
	cin >> songaynghi;
}

int LuongFullTime::tluong() {
	return (7000000 - 220000 * songaynghi) + tienthuong;
}

void LuongFullTime::xuat() {
	cout << "Tien luong nhan vien : " << tluong() << "VND" << endl;
}

//=================================================================

//class thongtin
ThongTin::ThongTin() {
	hoten = "";
	ID = "";
	gioitinh = "";
	ngay = 0;
	thang = 0;
	nam = 0;
}

ThongTin::~ThongTin() {
}

void ThongTin::nhap() {
	cin.ignore();
	cout << "Nhap ho ten : ";
	getline(cin, hoten);
	cout << "Nhap ID : ";
	getline(cin, ID);
	cout << "Gioi tinh : ";
	getline(cin, gioitinh);
	cout << "Ngay sinh : ";
	cin >> ngay;
	cout << "Thang sinh : ";
	cin >> thang;
	cout << "Nam sinh : ";
	cin >> nam;

}

string ThongTin::getID() {
	return ID;
}

void ThongTin::xuat() {
	cout << "Ho ten : " << hoten << endl;
	cout << "Gioi tinh : " << gioitinh << endl;
	cout << "ID : " << ID << endl;
	cout << "Ngay sinh : Ngay " << ngay << " Thang " << thang << " Nam " << nam << endl;

}

Node* List::CreateNode(ThongTin ns) {  //tao node
	size++;
	Node* n = new Node;
	n->data = ns;
	n->next = NULL;
	return n;
}

List::List() {
	head = NULL;
	tail = NULL;
	size = 0;
}

List::~List() {
}


void List::AddL() {  //them 1 nhan vien
	ThongTin ns;
	cout << "NHAP THONG TIN" << endl;
	ns.nhap();
	Node* n = CreateNode(ns);
	if (head == tail && head == NULL) {
		tail = head = n;
		tail->next = NULL;
		head->next = NULL;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

bool List::Tim(string id) {
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id)
			return 0;
	}
	return 1;
}

void List::Sua() { //cap nhat thong tin
	string id;
	Node* n;
	ThongTin ns;
	cout << "ID Can Sua Thong Tin : ";
	cin >> id;
	if (Tim(id)==1) {
		cout << "Ma ID Khong Ton Tai..." << endl;
	}
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id) {
			cin.ignore();
			ns.nhap();
			n->data = ns;
			cout << "Da Hoan Tat" << endl;
			return;
				
		}
	}
}
void List::SearchID() { //tim nhan vien bang id
	string id;
	if (size == 0) {
		cout << "Danh Sach Hien Tai Chua Co Nhan Su Nao!!!" << endl;
		return;
	}
	cout << "Nhap ID Nhan Su Can Tim : ";
	cin >> id;
	Node* n = head;
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id) {
			n->data.xuat();
		}
	}
}

void List::xuatNS() {  //xuat ds
	if (head == NULL && tail == NULL) {
		cout << "Danh Sach Trong..." << endl;
	}
	for (Node* n = head; n != NULL; n = n->next) {
		n->data.xuat();
	}
}


int main() {
	int chon;
	List list;
	ThongTin ns;
	LuongPartTime pt;
	LuongFullTime ft;
	cout << "\t\t===============================================================================" << endl;
	cout << "\t\t||                                                                           ||" << endl;
	cout << "\t\t||                           QUAN LY NHAN VIEN                               ||" << endl;
	cout << "\t\t||                                                                           ||" << endl;
	cout << "\t\t||           ###############    ######     ###     ################          ||" << endl;
	cout << "\t\t||                 ###          ### ###    ###           ###                 ||" << endl;
	cout << "\t\t||                 ###          ###  ###   ###           ###                 ||" << endl;
	cout << "\t\t||                 ###          ###   ###  ###           ###                 ||" << endl;
	cout << "\t\t||                 ###          ###    ### ###           ###                 ||" << endl;
	cout << "\t\t||                 ###          ###     ######           ###   cinema        ||" << endl;
	cout << "\t\t||                                                                           ||" << endl;
	cout << "\t\t===============================================================================" << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||1.NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG        ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||2.NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG        ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||3.XUAT DANH SACH NHAN VIEN                              ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||4.TIM NHAN VIEN BANG ID                                 ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||5.CAP NHAT THONG TIN NHAN VIEN                          ||          " << endl;
	cout << "\t\t\t||                                                        ||          " << endl;
	cout << "\t\t\t||6.THOAT                                                 ||          " << endl;
	cout << "\t\t\t============================================================          " << endl;
	do {
		

		cout << endl;
		cout << "\t\t\t\t\tLUA CHON CUA BAN : ";
		cin >> chon;
		switch (chon) {
		case 1:
			cout << "\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t===================================================================================" << endl;
			cout << "\t\t||                NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG                 ||" << endl;
			cout << "\t\t===================================================================================" << endl;
			cout << endl;
			list.AddL();
			pt.nhap();
			pt.xuat();
			break;
		case 2:
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "===================================================================================" << endl;
			cout << "||                NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG                 ||" << endl;
			cout << "===================================================================================" << endl;
			cout << endl;
			list.AddL();
			ft.nhap();
			ft.xuat();
			break;
		case 3:
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "===================================================================================" << endl;
			cout << "||                           XUAT DANH SACH NHAN VIEN                            ||" << endl;
			cout << "===================================================================================" << endl;
			cout << endl;
			list.xuatNS();
			break;
		case 4:
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "===================================================================================" << endl;
			cout << "||                                    TIM KIEM                                   ||" << endl;
			cout << "===================================================================================" << endl;
			cout << endl;
			list.SearchID();
			break;
		case 5:
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "===================================================================================" << endl;
			cout << "||                              cAP NHAT NHAN VIEN                               ||" << endl;
			cout << "===================================================================================" << endl;
			cout << endl;
			list.Sua();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "Vui Long Chon Dung..." << endl;
			cin.ignore();
		}		
	} while (chon != 6);
}
