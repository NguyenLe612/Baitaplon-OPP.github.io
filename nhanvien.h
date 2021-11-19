#include<iostream>
#include<string>

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
	bool Tim(string id);
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
