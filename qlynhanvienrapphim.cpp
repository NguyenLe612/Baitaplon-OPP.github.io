#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>
const int g_kArraySize = 8;


//tai khoan : username
//mat khau : password

using namespace std;


class Nhansu {
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
};

class ThongTin :public Nhansu {
private:
	string hoten;
	string ID;
	string gioitinh;
	int ngay, thang, nam;

public:
	ThongTin();
	~ThongTin();

	void nhap();
	void xuat();

	string getID();

	void display();


};


class LuongPartTime :public Nhansu {
private:
	int sogio;
	int thuong;
public:
	LuongPartTime();
	~LuongPartTime();

	void nhap();
	void xuat();
	int luong();
};


class LuongFullTime :public Nhansu {
private:
	int tienthuong;
	int songaynghi;
public:
	LuongFullTime();
	~LuongFullTime();

	void nhap();
	void xuat();
	int tluong();

};
class Node {
private:
	ThongTin data;
	Node* next;
public:
	friend class List;
};


class List {
private:
	Node* head;
	Node* tail;
	long size;
public:
	List();
	~List();

	Node* CreateNode(ThongTin ns);
	void SearchID();
	void AddL();
	void xuatNS();
	void Sua();
};


class Movie
{
private:
	string tenphim;
	int ve;
	int giave;
public:
	Movie();
	Movie(string xten, int xve, double xgiave);
	~Movie();

	string get_tenphim();
	int get_ve();
	int get_giave();
	void set_tenphim(string phimmoi);
	void set_ve(int vemoi);
	void set_giave(int giamoi);

	int muave(int vemoi);
	void Display();
};



class MovieTicketMaster
{
private:
	Movie* p_dsphim;
public:
	MovieTicketMaster();
	MovieTicketMaster(string my_theater_name, string my_theater_location);
	~MovieTicketMaster();
	void Init(Movie* p_my_MovieList, int array_size);
	void Run();
	void DisplayMenu();
	void ViewMovies();
	Movie* SearchMovie();
	Movie* FindMovie(string find_movie_name);
	void MuaVe();

};




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



void ThongTin::xuat() {
	cout << "\t\t\t\t\t\t\t\tHo ten : " << setw(30) << left << hoten << setw(15);
	cout << "Gioi tinh : " << gioitinh << endl;
	cout << "\t\t\t\t\t\t\t\tID : " << ID << endl;
	cout << "\t\t\t\t\t\t\t\tNgay sinh : Ngay " << ngay << " Thang " << thang << " Nam " << nam << endl;
	cout << "\t\t\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl;

}

string ThongTin::getID() {
	return ID;
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

void List::Sua() { //cap nhat thong tin
	int f = 0;
	string id;
	Node* n;
	ThongTin ns;
	if (size == 0) {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tDanh Sach Hien Tai Chua Co Nhan Su Nao!!!" << endl;
		return;
	}
	cout << "\t\t\t\t\t\t\t\tID Can Sua Thong Tin : ";
	cin >> id;
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id) {
			cin.ignore();
			ns.nhap();
			n->data = ns;
			f++;
			Beep(1050, 500);
			cout << "\t\t\t\t\t\t\t\tDa Hoan Tat" << endl;
			return;
				
		}
	}
	if (f==0) {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tMa ID Khong Ton Tai..." << endl;
	}
}
void List::SearchID() { //tim nhan vien bang id
	string id;
	int f = 0;
	if (size == 0) {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tDanh Sach Hien Tai Chua Co Nhan Su Nao!!!" << endl;
		return;
	}
	cout << "\t\t\t\t\t\t\t\tNhap ID Nhan Su Can Tim : ";
	cin >> id;
	Node* n = head;
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->data.getID() == id) {
			f++;
			n->data.xuat();
		}
		
	}
	if (f == 0) {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tID Khong Ton Tai!!!" << endl;
	}
}

void List::xuatNS() {  //xuat ds
	if (head == NULL && tail == NULL) {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tDanh Sach Trong..." << endl;
	}
	for (Node* n = head; n != NULL; n = n->next) {
		n->data.xuat();
	}
}
//====================================================================


Movie::Movie()  //ham khoi tao k tham so
{
	tenphim = "";
	ve = 0;
	giave = 0;
}



Movie::Movie(string xten, int xve, double xgiave)  //khoi tao co tham so
{
	tenphim = xten;
	ve = xve;
	giave = xgiave;
}


Movie::~Movie()  //ham huy
{

}


string Movie::get_tenphim()
{
	return tenphim;
}


int Movie::get_ve()
{
	return ve;
}


int Movie::get_giave()
{
	return giave;
}

void Movie::set_tenphim(string phimmoi)
{
	tenphim = phimmoi;
}


void Movie::set_ve(int vemoi)
{
	ve = vemoi;
}


void Movie::set_giave(int giamoi)
{
	giave = giamoi;
}


int Movie::muave(int vemoi)
{
	double total_price;

	if (vemoi <= ve) {
		total_price = vemoi * giave;
		ve = ve - vemoi;
		return total_price;
	}
	else {
		return -1;
	}
}

//======================================================================

void Movie::Display()  //hien thi	
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << endl << "\t\t\t\t\t\t\t\t\t\tTen Phim : " << tenphim << endl
		<< "\t\t\t\t\t\t\t\t\t\tSo luong ve : " << ve << endl
		<< "\t\t\t\t\t\t\t\t\t\tGia ve : " << giave << "VND" << endl << endl;

}


MovieTicketMaster::MovieTicketMaster()  //set con tro mac dinh den Null
{
	p_dsphim = NULL;
}


MovieTicketMaster::MovieTicketMaster(string my_theater_name, string my_theater_location)  //ten, dia chi va van khoi tao con tro
{

	p_dsphim = NULL;
}

MovieTicketMaster::~MovieTicketMaster()
{

}


void MovieTicketMaster::Init(Movie* p_my_MovieList, int array_size)  //khoi tao doi tuong cho ds phim
{
	string movie_titles[g_kArraySize] = { "Mat Biec",
		"The Nun",
		"Thap Tam Muoi",
		"Bo Gia",
		"Bo Tre",
		"Medium",
		"The Conjuring",
		"Ke Nguyen Ta Chet" };

	int theater_tickets[g_kArraySize] = { 100,75,90,90,75,115,120,130 };

	double movie_price[g_kArraySize] = { 55000,55000,55000,55000,55000,55000,55000,55000 };

	Movie* p = p_my_MovieList;

	for (int i = 0; i <= g_kArraySize - 1; i++) {
		p->set_tenphim(movie_titles[i]);
		p->set_ve(theater_tickets[i]);
		p->set_giave(movie_price[i]);
		p++;
	}

	p_dsphim = p_my_MovieList;

}


void MovieTicketMaster::ViewMovies()
{

	Movie* p_view_movies = p_dsphim;
	system("CLS");
	cout << "\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                           DANH SACH PHIM RAP CO                           ||" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << endl;
	cout << endl
		<< "\t\t\t\t\t\t\t\tTat ca cac phim rap co : " << endl
		<< "\t\t\t\t\t\t\t\tTNT CINEMA:" << endl
		<< "\t\t\t\t\t\t\t\t=========================" << endl << endl;

	for (int i = 0; i < g_kArraySize; i++) {           //vong lap hien thi cac doi tuong
		cout << "\t\t\t\t\t\t\t\tMovie showing at theater " << i + 1 << ": " << endl;
		p_view_movies->Display();
		++p_view_movies;
	}
}



Movie* MovieTicketMaster::SearchMovie()  //yeu cau nhap va dung ham de tim
{
	string search_movie_name;
	system("cls");
	cout << "\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                              TIM PHIM                                     ||" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tNhap Ten Phim: ";
	cin.ignore();
	std::getline(std::cin, search_movie_name);

	Movie* p = FindMovie(search_movie_name);       //lay con tro va hien thi doi tuong

	if (p != NULL) {
		p->Display();
	}
	else {
		Beep(587, 500);
		cout << endl << "\t\t\t\t\t\t\t\tKhong Tim Thay Phim." << endl << endl;
		return NULL;
	}
	return p;
}





Movie* MovieTicketMaster::FindMovie(string timphim)   //su dung vong lap de tim doi tuong
{

	Movie* p_find_movie = p_dsphim;
	//func1353c
	for (int i = 0; i < g_kArraySize; i++) {
		if (p_find_movie->get_tenphim() == timphim) {    //dung vong long de tim phim phu hop, sau do con tro tra lai doi tuong
			Beep(1050, 500);
			cout << endl << "\t\t\t\t\t\t\t\tDa tim thay..." << endl;
			return p_find_movie;
		}
		else {
			p_find_movie++;
		}
	}
	return NULL;
}


void MovieTicketMaster::MuaVe()
{
	string phim;
	int ve;
	system("CLS");
	cout << "\t\t\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                 MUA VE                                    ||" << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tTen phim: ";
	cin.ignore();
	std::getline(std::cin, phim);

	cout << "\t\t\t\t\t\t\t\tNhap so ve ban muon mua: ";
	cin >> ve;

	Movie* p = FindMovie(phim);

	if (p != NULL) {
		double tienve = p->muave(ve);
		if (tienve == -1) {
			cout << "\t\t\t\t\t\t\t\tPhim da duoc ban het truoc do" << endl
				<< "\t\t\t\t\t\t\t\tkhong du ve cho yeu cau cua ban" << endl << endl;
		}
		else {
			cout << "\t\t\t\t\t\t\t\tTong so tien : " << tienve << "VND" << endl;
		}
		system("PAUSE");
		system("CLS");
	}
	else {
		Beep(587, 500);
		cout << "\t\t\t\t\t\t\t\tKhong tim thay phim" << endl;
	}
	system("pause");
	system("cls");
}


void MovieTicketMaster::Run()  //chay vong lap de yeu cau su lua chon cua ng dung
{
	int chon;

	do {

		DisplayMenu();

		cout << endl << "\t\t\t\t\t\t\t\tLUA CHON CUA BAN: ";

		cin >> chon;

		switch (chon)
		{

		case 1:
			
			ViewMovies();
			system("PAUSE");
			system("CLS");
			break;

		case 2:
			
			SearchMovie();
			system("PAUSE");
			system("CLS");
			break;

		case 3:
			
			MuaVe();
			break;

		case 4:

			cout << "\t\t\t\t\t\t\t\tMua ve tai Website : TNTcinema.com \n" << endl;
			break;


		default:
			Beep(587, 500);
			system("cls");

		}
	} while (chon != 4);
	
}


void MovieTicketMaster::DisplayMenu()  //hien thi menu, ten rap va vi tri trong khi hien thi cac lua chon
{
	cout << "\t\t\t\t\t\t\t\t===============================================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||                                WELCOME!!!                                 ||" << endl;
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
	cout << "\t\t\t\t\t\t\t\t||1.DANH SACH PHIM DANG CHIEU                                                ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||2.TIM PHIM                                                                 ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||3.MUA VE                                                                   ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||                                                                           ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t||4.THOAT                                                                    ||          " << endl;
	cout << "\t\t\t\t\t\t\t\t===============================================================================          " << endl;;

}



void menuquanly() {

	
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
			system("cls");
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
			system("cls");
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
			system("cls");
			cout << "\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||                           XUAT DANH SACH NHAN VIEN                            ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << endl;
			list.xuatNS();
			break;
		case 4:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t-----------------------------------------------------------------------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << "\t\t\t\t\t\t\t\t||                                    TIM KIEM                                   ||" << endl;
			cout << "\t\t\t\t\t\t\t\t===================================================================================" << endl;
			cout << endl;
			list.SearchID();
			break;
		case 5:
			system("cls");
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
			Beep(587, 500);
			cout << "\t\t\t\t\t\t\t\tVui Long Chon Dung..." << endl;
			cin.ignore();
		}
	} while (chon != 6);
}



int main() {



	system("mode 650");
	system("color 7");
	string mk = "password";
	string tk = "username";
	string usn, pwd;
	int a;
	cout << "\t\t\t\t\t\t\t\t==================================================" << endl;
	cout << "\t\t\t\t\t\t\t\t1.KHACH HANG \t\t\t\t 2.QUAN LY" << endl;
	cout << "\t\t\t\t\t\t\t\t==================================================" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tBAN LA : ";
	cin >> a;
	system("cls");
	LAP:if (a == 2) {
		cout << "\t\t\t\t\t\t\t\t===============================================" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tDANG NHAP" << endl;
		cout << "\t\t\t\t\t\t\t\t===============================================" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\tTai khoan : ";
		cin >> usn;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\tMat khau : ";
		cin >> pwd;
		system("cls");
		if (tk.compare(usn) == 0 && mk.compare(pwd) == 0) {
			menuquanly();
		}
		else
		{
			Beep(587, 500);
			cout << "\t\t\t\t\t\t\t\tTai khoan hoac mat khau khong dung...Vui long nhap lai" << endl;
			cout << endl;
			goto LAP;
		}		
	}
	else if (a == 1) {
		Movie movie_objects[g_kArraySize];
		MovieTicketMaster* p_MovieTicketMaster = new MovieTicketMaster();
		p_MovieTicketMaster->Init(movie_objects, g_kArraySize);
		p_MovieTicketMaster->Run();
		delete p_MovieTicketMaster;

	}
}