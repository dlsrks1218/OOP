#include <iostream>
#pragma warning(disable:4996)
using namespace std;

namespace RISK_LEVEL {
	enum RISK {
		RISK_A=3, RISK_B=2, RISK_C=1
	};
}

class Employee {
private:
	char name[100];
public:
	Employee(char *name) {
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		cout << "name : " << name << endl;
	}
	virtual int GetPay() const {
		return 0;
	}
	virtual void ShowSalaryInfo() const {

	}
};
class TemporaryWorker :public Employee {
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char *name, int pay) :Employee(name), workTime(0), payPerHour(pay) {

	}
	void AddWorkTime(int time) {
		workTime += time;
	}
	int GetPay()const {
		return workTime*payPerHour;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};
class PermanentWorker :public Employee {
private:
	int salary;
public:
	PermanentWorker(char *name, int money) :Employee(name), salary(money) {

	}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};
class SalesWorker :public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char *name, int money, double ratio) :PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {

	}
	void AddSalesResult(int value) {
		salesResult += value;
	}
	int GetPay() const {
		return PermanentWorker::GetPay()
			+ (int)(salesResult*bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler {
private:
	Employee *empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0) {

	}
	void AddEmployee(Employee *emp) {
		empList[empNum++] = emp;
	}
	
	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo();
		}
	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};
class ForeignSalesWorker :public SalesWorker {
private:
	int riskLevel;
public:
	ForeignSalesWorker(char *name, int money, double ratio, int risk):SalesWorker(name, money, ratio), riskLevel(risk) {

	}
	int GetRiskPay() const {
		return (SalesWorker::GetPay() * (riskLevel*0.1));
	}
	int GetPay() const {
		return SalesWorker::GetPay() + GetRiskPay();
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "salary : " << SalesWorker::GetPay() << endl;
		cout << "risk pay : " << GetRiskPay() << endl;
		cout << "total salary : " << GetPay() << endl << endl;
	}
};

int main(void) {
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("Kim", 1000));
	handler.AddEmployee(new PermanentWorker("Lee", 1500));

	TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	SalesWorker *seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	ForeignSalesWorker *fseller1
		= new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker *fseller2
		= new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker *fseller3
		= new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller3);

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();

	return 0;
}