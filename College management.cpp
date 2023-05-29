#include <iostream>
#include <vector>
using namespace std;
class Student{
	private:
		string name, subject;
		int rollNo;
	public:
	/*	Student(string Name, int RollNo, string Subject){
		name=Name;
		rollNo= RollNo;
		subject= Subject;
		}*/
		setName(string n){
			name=n;
		}
		setRollNo(int r){
			rollNo=r;
		}
		setSubject(string s){
			subject= s;
		}
	string getName(){
		return name;
	}
	int getRollNo(){
		return rollNo;
	}
	string getSubject(){
		return subject;
	}
	
};

class College{
	private:
		vector<Student> ve;
	public:
	add(string Name, int RollNo, string Subject){
		Student student(Name,RollNo,Subject);
		ve.push_back(student);
	}
	display(){
		for(int i=0; i<ve.size(); i++){
		
			cout<<" Name: "<<ve[i].getName()<<endl;
		cout<<"RollNo: "<<ve[i].getRollNo()<<endl;
	cout<<"Subject: "<<ve[i].getSubject()<<endl<<endl;
}
	}
	
update(){
	int rn;
	cout<<"Enter RollNo for search and update: "; cin>>rn;
	for(int i=0; i<ve.size(); i++){
	if(rn==ve[i].getRollNo()){
	cout<<"<<<<< Old Record >>>>>"<<endl<<endl;
	cout<<" Name: "<<ve[i].getName()<<endl;
	cout<<"RollNo: "<<ve[i].getRollNo()<<endl;
	cout<<"Subject: "<<ve[i].getSubject()<<endl<<endl;
	cout<<"<<<<< Update >>>>>"<<endl<<endl;
	int r; string s;
	cout<<"Enter New RollNo: "; cin>>r;
	ve[i].setRollNo(r);
	cout<<"Enter New Subject: "; cin>>s;
	ve[i].setSubject(s);
	}
	}
}
};
int main(){
	College college;
	string Name, Subject; int RollNo;
	cout<<"***** College Management System *****"<<endl<<endl;
int value;
while(true){
	cout<<"Enter 1 for add student:"<<endl;
	cout<<"Enter 2 for display students:"<<endl;
	cout<<"Enter 3 for update record:"<<endl;
	cout<<"Enter 0 for exit from program:"<<endl;
	cout<<"Enter Choice: "; cin>>value;
	
	if(value==1){system("cls");
		cout<<"Enter Name: "; cin>>Name;
		cout<<"Enter RollNo: "; cin>>RollNo;
		cout<<"Enter Subject: "; cin>>Subject;
	college.add(Name, RollNo, Subject);
	}
	else if(value==2){system("cls");
		college.display();
	}
	else if(value==3){system("cls");
		college.update();
	}
	else if(value==0){
		exit(0);
	}
	else{system("cls");
		cout<<"Invalid Input"<<endl<<endl;
	}
}
}
