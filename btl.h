#pragma once
#include<iostream>
#include<string>

class Nhansu
{
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
};

class Luong :public Nhansu
{
private:
	float thuong;
	int sogiolam;
public:
	Luong();
	~Luong();

	float tienluong();

	void nhap();
	void xuat();

};

class Chucvu :public Nhansu
{
private:
	string chucvu;
public:
	Chucvu();
	~Chucvu();

	string getchucvu();

	void setchucvu();

	void nhap();
	void xuat();

};

class Thongtin :public Nhansu {
private:
	string hoten;
	string ID;
	string diachi;
	string SDT;
	string gioitinh;
	int ngay, thang, nam;
	Chucvu chucvu;
	Luong tienluong;
public:
	Thongtin();
	~Thongtin();

	string get_hoten();
	Luong get_tienluong();
	Chucvu get_chucvu();

	void nhap();
	void xuat();

};
