//#include "Stock.h"

/*void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();

}

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}

void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}

void Stock::update(float pr) {
	share_val = pr;
	set_total();
}

void Stock::show() {
	cout << "ȸ��� :" << name << endl;
	cout << "�ֽ� �� : " << shares << endl;
	cout << "�ְ� : " << share_val << endl;
	cout << "�ֽ� �� ��ġ : " << total_val << endl;

}

Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this;
}
Stock::Stock(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::~Stock() //�ı���
{
	cout << name << "Ŭ������ �Ҹ�Ǿ����ϴ�.\n";
}*/

#include "time.h"
Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

Time Time::sum(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

void Time :: show() {
	std::cout << "�ð� : " << hours << std::endl;
	std::cout << "�� : " << mins << std::endl;

}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 +mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << " �ð� " << t.mins << "��";
	return os;
}

NewTime::NewTime() :Time(){
	day = 0;
}

NewTime::NewTime(int h, int m, int d) :Time(h,m) {
	day = d;
}

void NewTime::show() {
	std::cout << "�� : " << day << std::endl;
	std::cout << "�ð� : " << getHour() << std::endl;
	std::cout << "�� : " << getMins() << std::endl;

}