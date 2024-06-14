#pragma once
// Grad.h
#ifndef GUARD_Intl_H
#define GUARD_Intl_H

#include "../Core.h"
#include <istream>

class Intl : public Core {
public:
	// �� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	// ��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Intl* clone() const { return new Intl(*this); }
private:
	double toeic; // ��
};

#endif