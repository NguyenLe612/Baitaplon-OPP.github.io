#include<iostream>
#include<iomanip>
#include<string>
#include"nhanvien.h"
#include<Windows.h>


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
	cout << "\t\t\t\t\t\t\t\tTien thuong them : ";
	cin >> thuong;
	cout << "\t\t\t\t\t\t\t\tSo gio lam cua nhan vien : ";
	cin >> sogio;
}

int LuongPartTime::luong()
{
	return (20000 * sogio) + thuong;
}

void LuongPartTime::xuat() {
	cout << "\t\t\t\t\t\t\t\tTien luong nhan vien : " << luong() << "VND" << endl;
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
	cout << "\t\t\t\t\t\t\t\tTien thuong : ";
	cin >> tienthuong;
	cout << "\t\t\t\t\t\t\t\tSo ngay nghi : ";
	cin >> songaynghi;
}

int LuongFullTime::tluong() {
	return (5000000 - 20000 * songaynghi) + tienthuong;
}

void LuongFullTime::xuat() {
	cout << "\t\t\t\t\t\t\t\tTien luong nhan vien : " << tluong() << "VND" << endl;
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
	cout << "\t\t\t\t\t\t\t\tNhap ho ten : ";
	getline(cin, hoten);
	cout << "\t\t\t\t\t\t\t\tNhap ID : ";
	getline(cin, ID);
	cout << "\t\t\t\t\t\t\t\tGioi tinh : ";
	getline(cin, gioitinh);
	
	cout << "\t\t\t\t\t\t\t\tNgay sinh : ";
	cin >> ngay;
	cout << "\t\t\t\t\t\t\t\tThang sinh : ";
	cin >> thang;
	cout << "\t\t\t\t\t\t\t\tNam sinh : ";
	cin >> nam;
}

string ThongTin::getID() {
	return ID;
}

void ThongTin::xuat() {
	cout << "\t\t\t\t\t\t\t\tHo ten : " << setw(15) << left << hoten << setw(15);
	cout << "Gioi tinh : " << gioitinh << endl;
	cout << "\t\t\t\t\t\t\t\tID : " << ID << endl;
	cout << "\t\t\t\t\t\t\t\tNgay sinh : Ngay " << ngay << " Thang " << thang << " Nam " << nam << endl;
	cout << "\t\t\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl;

}

void ThongTin::display() {
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                           QUAN LY NHAN VIEN                               ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||           ###############    ######     ###     ################          ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                 ###          ### ###    ###           ###                 ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                 ###          ###  ###   ###           ###                 ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                 ###          ###   ###  ###           ###                 ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                 ###          ###    ### ###           ###                 ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                 ###          ###     ######           ###   cinema        ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||1.NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||2.NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||3.XUAT DANH SACH NHAN VIEN                                                 ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||4.TIM NHAN VIEN BANG ID                                                    ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||5.CAP NHAT THONG TIN NHAN VIEN                                             ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||6.THOAT                                                                    ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================          " << endl;
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
	cout << "\t\t\t\t\t\t\t\tNHAP THONG TIN" << endl;
	cout << endl;
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
	cout << "\t\t\t\t\t\t\t\tID Can Sua Thong Tin : ";
	cin >> id;
	if (Tim(id)==1) {
		cout << "\t\t\t\t\t\t\t\tMa ID Khong Ton Tai..." << endl;
	}
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id) {
			cin.ignore();
			ns.nhap();
			n->data = ns;
			cout << "\t\t\t\t\t\t\t\tDa Hoan Tat" << endl;
			return;
				
		}
	}
}
void List::SearchID() { //tim nhan vien bang id
	string id;
	if (size == 0) {
		cout << "\t\t\t\t\t\t\t\tDanh Sach Hien Tai Chua Co Nhan Su Nao!!!" << endl;
		return;
	}
	cout << "\t\t\t\t\t\t\t\tNhap ID Nhan Su Can Tim : ";
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
		cout << "\t\t\t\t\t\t\t\tDanh Sach Trong..." << endl;
	}
	for (Node* n = head; n != NULL; n = n->next) {
		n->data.xuat();
	}
}

int main() {
	system("mode 650");
	system("color 7");
	int chon;
	int c;
	List list;
	ThongTin ns;
	LuongPartTime pt;
	LuongFullTime ft;
	do {
		ns.display();
		cout << endl;
		cout << "\t\t\t\t\t\t\t\tLUA CHON CUA BAN : ";
		cin >> chon;		
		switch (chon) {
		case 1:
			cout << "\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||              NHAP DU LIEU NHAN VIEN PART TIME VA XUAT LUONG               ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
			cout << endl;
			list.AddL();
			pt.nhap();
			pt.xuat();
			break;
		case 2:
			cout << "\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||              NHAP DU LIEU NHAN VIEN FULL TIME VA XUAT LUONG               ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
			cout << endl;
			list.AddL();
			ft.nhap();
			ft.xuat();
			break;
		case 3:
			cout << "\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||                           XUAT DANH SACH NHAN VIEN                            ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << endl;
			list.xuatNS();
			break;
		case 4:
			cout << "\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||                                    TIM KIEM                                   ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << endl;
			list.SearchID();
			break;
		case 5:
			cout << "\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||                              cAP NHAT NHAN VIEN                               ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << endl;
			list.Sua();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "\t\t\t\t\t\t\t\tVui Long Chon Dung..." << endl;
			cin.ignore();
		}		
	} while (chon != 6);
}