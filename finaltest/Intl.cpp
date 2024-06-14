// Grad.cpp

#include <algorithm>

#include "Intl.h"
using namespace std;

istream& read_hw(istream& in, vector<double>& hw);

istream& Intl::read(istream& in) {
	Intl::read_common(in);
	in >>toeic;
	read_hw(in, Intl::homework);
	return in;
}
double Intl::grade() const {
	return min(Intl::grade(), toeic);
}