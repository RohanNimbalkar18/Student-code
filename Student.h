#include<iostream>

class Student
{   private:
	int studid;
	string studname;
	double m1,m2,m3;
	public:
		Student(){
			cout<<"Default constr";
			studid=1;
			studname="Rohan";
			m1=55,m2=34,m3=45;
			
		};
		Student(int studid,string studname,double m1,double m2,double m3){
			this->studid=studid;
			this->studname=studname;
			this->m1=m1;
			this->m2=m2;
			this->m3=m3;
		}
	
};
