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
	cout << "회사명 :" << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;

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

Stock::~Stock() //파괴자
{
	cout << name << "클래스가 소멸되었습니다.\n";
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
	std::cout << "시간 : " << hours << std::endl;
	std::cout << "분 : " << mins << std::endl;

}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 +mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << " 시간 " << t.mins << "분";
	return os;
}

NewTime::NewTime() :Time(){
	day = 0;
}

NewTime::NewTime(int h, int m, int d) :Time(h,m) {
	day = d;
}

void NewTime::show() {
	std::cout << "일 : " << day << std::endl;
	std::cout << "시간 : " << getHour() << std::endl;
	std::cout << "분 : " << getMins() << std::endl;

}