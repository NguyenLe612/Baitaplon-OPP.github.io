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
