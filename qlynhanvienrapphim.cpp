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
	return (5000000 - 20000 * songaynghi) + tienthuong;
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
	cout << "============================================================================" << endl;
	cout << "||                                                                        ||" << endl;
	cout << "||                           QUAN LY NHAN VIEN                            ||" << endl;
	cout << "||                                                                        ||" << endl;
	cout << "||           ###############    ######     ###     ################       ||" << endl;
	cout << "||                 ###          ### ###    ###           ###              ||" << endl;
	cout << "||                 ###          ###  ###   ###           ###              ||" << endl;
	cout << "||                 ###          ###   ###  ###           ###              ||" << endl;
	cout << "||                 ###          ###    ### ###           ###              ||" << endl;
	cout << "||                 ###          ###     ######           ###   cinema     ||" << endl;
	cout << "||                                                                        ||" << endl;
	cout << "============================================================================" << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||1.NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||2.NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||3.XUAT DANH SACH NHAN VIEN                       ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||4.TIM NHAN VIEN BANG ID                          ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||5.CAP NHAT THONG TIN NHAN VIEN                   ||          " << endl;
	cout << "             ||                                                 ||          " << endl;
	cout << "             ||6.THOAT                                          ||          " << endl;
	do {
		

		cout << "                     LUA CHON CUA BAN : ";
		cin >> chon;
		switch (chon) {
		case 1:
			cout << "                 NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG" << endl;
			list.AddL();
			pt.nhap();
			pt.xuat();
			break;
		case 2:
			cout << "                 NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG" << endl;
			list.AddL();
			ft.nhap();
			ft.xuat();
			break;
		case 3:
			cout << "                           DANH SACH NHAN VIEN" << endl;
			list.xuatNS();
			break;
		case 4:
			list.SearchID();
			break;
		case 5:
			list.Sua();
			break;
		case 6:
			cout << "DTcinema.com" << endl;
			break;
		default:
			cout << "Vui Long Chon Dung..." << endl;
			cin.ignore();
		}		
	} while (chon != 6);
}