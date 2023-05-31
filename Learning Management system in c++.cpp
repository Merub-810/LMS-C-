#include<iostream> 
#include<string> 
#include<cstring>
#include<conio.h>
using namespace std;
class date
{
private:
	int day;
	int month;
	int year;
public:
	date(int tday = 0, int tmonth = 0, int tyear = 0) :day(tday), month(tmonth), year(tyear)
	{}
	void setday(int tday)
	{
		day = tday;
	}
	void setmonth(int tmonth)
	{
		month = tmonth;
	}
	void setyear(int tyear)
	{
		year = tyear;
	}
	void setdate(int tday, int tmonth, int tyear)
	{
		day = tday;
		month = tmonth;
		year = tyear;
	}
	int getday()
	{
		return day;
	}
	int getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}
	void display()
	{
		cout << "\n\t\t\t" << getday() << "/" << getmonth() << "/" << getyear() << endl;
	}
	~date()
	{}
};
class personal_info
{
private:
	string Password;
	string FirstName;
	string LastName;
	string id;
	date joindate;
	date DateofBirth;
	string Address;
	long long int phoneNo;
public:
	personal_info(string password = "NULL", string first_name = "NULL", string last_name = "NULL", string tid = "NULL", date j_date = NULL, date dob = NULL, string tAddress = "NULL", long long int pNo = 0) :Password(password), FirstName(first_name), LastName(last_name), id(tid), joindate(j_date), DateofBirth(dob), Address(tAddress), phoneNo(pNo)
	{

	}
	void setPassword(string password)
	{
		Password = password;
	}
	void setFirstName(string first_name)
	{
		FirstName = first_name;
	}
	void setLastName(string last_name)
	{
		LastName = last_name;
	}
	void set_id(string tid)
	{
		id = tid;
	}
	void setJoindate(date &j_date)
	{
		joindate = j_date;
	}
	void setDOB(date &dob)
	{
		DateofBirth = dob;
	}
	void setAddress(string tAddress)
	{
		Address = tAddress;
	}
	void setPhoneNo(long long int pNo)
	{
		phoneNo = pNo;
	}
	void set_Personalinfo(string password, string first_name, string last_name, string tid, date j_date, date dob, string tAddress, long long int pNo)
	{
		setPassword(password);
		setFirstName(first_name);
		setLastName(last_name);
		set_id(tid);
		setJoindate(j_date);
		setDOB(dob);
		setAddress(tAddress);
		setPhoneNo(pNo);
	}
	string getFirstName()
	{
		return FirstName;
	}
	string getLastName()
	{
		return LastName;
	}
	string get_id()
	{
		return id;
	}
	string getPassword()
	{
		return Password;
	}
	date getJoindate()
	{
		return joindate;
	}
	date getDOB()
	{
		return DateofBirth;
	}
	string getAddress()
	{
		return Address;
	}
	long long int getPhoneNo()
	{
		return phoneNo;
	}
	void display_Personalinfo()
	{
		cout << "\n\t\t\tFirst Name : " << getFirstName() << endl;
		cout << "\n\t\t\tLast Name : " << getLastName() << endl;
		cout << "\n\t\t\tID : " << get_id() << endl;
		cout << "\n\t\t\tPassword : " << getPassword() << endl;
		cout << "\n\t\t\tJoining Date : ";
		joindate.display();
		cout << endl;
		cout << "\n\t\t\tDate of Birth : ";
		DateofBirth.display();
		cout << endl;
		cout << "\n\t\t\tHome Address : " << getAddress() << endl;
		cout << "\n\t\t\tPhone No : " << getPhoneNo() << endl;
	}

};
class Teacher :protected personal_info
{
public:
	personal_info t_info;
private:
	string techRegisteredCourselist[3];
	int tecRC_size;

public:
	Teacher(string password = "NULL", string first_name = "NULL", string last_name = "NULL", string tid = "NULL", date j_date = NULL, date dob = NULL, string tAddress = "NULL", long long int pNo = 0, int tech_rc_size = 0) :t_info(password, first_name, last_name, tid, j_date, dob, tAddress, pNo), tecRC_size(tech_rc_size)
	{

	}

	void set_Teacher(personal_info t_Info)
	{
		t_info = t_Info;
	}
	void set_techRegisteredCourse(string ccode)
	{
		techRegisteredCourselist[tecRC_size] = ccode;
		tecRC_size++;
	}
	void set_tecRegistered_courselistSize(int tech_rc_size)
	{
		tecRC_size = tech_rc_size;
	}
	int get_tecRegistered_courselistSize()
	{
		return tecRC_size;
	}
	string get_techRegisteredCourse(int index)
	{
		return techRegisteredCourselist[index];
	}
	void display()
	{
		cout << "-------------------- Teacher Information --------------------" << endl;
		t_info.display_Personalinfo();
	}



};
class attendance
{
private:
	int studentId;
	char present;

public:
	attendance()
	{
	}
	void setAttendance(char p)
	{
		present = p;
	}
	char getAttendance()
	{
		return present;
	}
	void display()
	{
		cout << "Stdent: " << studentId << "mkrd as present" << present;

	}

};
class Student :public personal_info
{
public:	personal_info info;

private:

	string registered_Course[6];

	int rc_Size;
public:
	Student(string password = "NULL", string first_name = "NULL", string last_name = "NULL", string tid = "NULL", date j_date = NULL, date dob = NULL, string tAddress = "NULL", long long int pNo = 0, int RC_size = 0) :info(password, first_name, last_name, tid, j_date, dob, tAddress, pNo), rc_Size(RC_size)
	{

	}


	void setStudent(personal_info tinfo)
	{
		info = tinfo;
	}
	void setStudent_Registered_Course(string ccode)
	{
		registered_Course[rc_Size] = ccode;

		rc_Size++;
	}
	void setRegistered_CourselistSize(int RC_size)
	{
		rc_Size = RC_size;
	}
	int getRegistered_CourselistSize()
	{
		return rc_Size;
	}

	string getStudent_Registered_Course_Code(int index)
	{
		return registered_Course[index];
	}

	personal_info getStudent()
	{
		return info;
	}
	void dropcourse(int index)
	{

		for (int i = index, j = index + 1; i < rc_Size; i++, j++)
		{
			registered_Course[i] = registered_Course[j];
		}
		rc_Size--;
	}
	void displayStudentInfo()
	{
		cout << " ~~~~~~~~~~~~~~~~~Student Information~~~~~~~~~~~~~~~~~" << endl;
		info.display_Personalinfo();

	}

};
class Assesment
{
private:
	int marks;
	string Type;
public:
	Assesment(int tmarks = 0, string tType = "NULL") :marks(tmarks), Type(tType)
	{

	}
	void setAssesment(int tmarks, string tType)
	{
		marks = tmarks;
		Type = tType;
	}
	int getMarks()
	{
		return marks;
	}
	string getAssesmentType()
	{
		return Type;
	}
	void displayAssessment()
	{
		cout << "Assessment : " << getAssesmentType() << "  Marks : " << getMarks() << endl;
	}

};
class Course {
private:
	string courseName;
	string courseCode;
	float credit_Hour;
	date startdate;
	string stulist[50];
	int scount;
	Assesment sAssessments[6];
	int sTotalMarks[3][2];
	int StudentAssesment[6][3];
	char attendanceList[3][2];
	int sacount = 0;

public:

	Course(string cname = "NULL", string  ccode = "NULL", float credit_hour = 0.0, int d = 0, int m = 0, int y = 0, int Scount = 0, int satotal = 0) : courseName(cname), courseCode(ccode), credit_Hour(credit_hour), startdate(d, m, y), scount(Scount), sacount(satotal)
	{

	}
	void addAttendence(char a, int  m, int n)
	{

		attendanceList[m][n] = a;

	}
	char getAttendance(int m, int n)
	{
		return attendanceList[m][n];
	}
	void setStudentAssesment(int marks, int  m, int n)
	{

		StudentAssesment[m][n] = marks;

	}
	int getStudentAssesment(int m, int n)
	{
		return StudentAssesment[m][n];
	}
	int get_Student_Assements_Count() {
		return sacount;
	}
	void addTotal(int total, int  m, int n)
	{
		sTotalMarks[m][n] = total;
	}
	int getTotal(int m, int n)
	{
		return sTotalMarks[m][n];
	}
	float getCredithour()
	{
		return credit_Hour;
	}
	void setCourse(string cname, string  ccode, float credit_hour, const date &sdate)
	{
		courseName = cname;
		courseCode = ccode;
		credit_Hour = credit_hour;
		startdate = sdate;
	}
	void setStulist(string stu_id)
	{
		if (scount < 50)
		{
			stulist[scount] = stu_id;
			scount++;
		}
		else
		{
			cout << "50 students are registered in this course" << endl;
			cout << "Space Filled" << endl;
		}
	}
	int getscount()
	{
		return scount;
	}
	string getstulist(int  index)
	{
		return stulist[index];
	}
	void addAssessment(int marks, string type)
	{

		sAssessments[sacount].setAssesment(marks, type);
		sacount++;

	}
	int getMarks(int index)
	{
		return sAssessments[index].getMarks();
	}
	string getAssesmentype(int index)
	{
		return sAssessments[index].getAssesmentType();
	}
	string getname()
	{
		return courseName;
	}
	string getCode()
	{
		return courseCode;
	}
	date getdate()
	{
		return startdate;
	}
	void dropstudent(string id)
	{
		for (int i = 0; i < scount; i++)
		{
			if (stulist[i] == id)
			{
				for (int j = i, k = i + 1; j < scount; j++, k++)
				{
					stulist[j] = stulist[k];
				}
				scount--;
				break;
			}
		}
	}
	void displayCourseInfo()
	{

		cout << "\n\t\t\tCourse Name: " << courseName << endl << "\n\t\t\tCourse Code:" << courseCode << endl;
		cout << "\n\t\t\tStarting Date of course :" << endl;
		startdate.display();
	}

};
class admin
{
public:
	personal_info a_info;
	Course courselist[3];
	Student studentlist[2];
	Teacher teacherlist[2];
public:int scount, ccount, tcount;
public:
	admin(string password = "NULL", string first_name = "NULL", string last_name = "NULL", string tid = "NULL", date j_date = NULL, date dob = NULL, string tAddress = "NULL", long long int pNo = 0, int Scount = 0, int Ccount = 0, int  Tcount = 0) :a_info(password, first_name, last_name, tid, j_date, dob, tAddress, pNo), scount(0), ccount(0), tcount(0)
	{
	}

	void set_admin(personal_info A_info)
	{
		a_info = A_info;
	}
	void addStudent(const Student& s)
	{
		if (scount < 50)
		{
			studentlist[scount] = s;
			scount++;
		}
		else
		{
			cout << "Sorry!!!! Your request cannot be entertained" << endl;
			cout << "         Student space is filled            " << endl;
		}

	}
	void addCourse(const Course& c)
	{
		if (ccount < 6)
		{
			courselist[ccount] = c;
			ccount++;
		}
		else
		{
			cout << "Sorry!!!! Your request cannot be entertained" << endl;
			cout << "         Course space is filled            " << endl;
		}


	}
	void addTeacher(const Teacher& t)
	{
		if (tcount < 10)
		{
			teacherlist[tcount] = t;
			tcount++;
		}
		else
		{
			cout << "Sorry!!!! Your request cannot be entertained" << endl;
			cout << "         Teacher space is filled            " << endl;
		}

	}
	Teacher getTeacherlist(int i)
	{

		return teacherlist[i];

	}
	Course getcourseslist(int i)
	{

		return courselist[i];

	}
	Student getStdList(int i)
	{

		return studentlist[i];

	}
	void AssignTeacher(string tid)
	{

		int courselimit = 0;
		for (int i = 0; i < tcount; i++)
		{

			if (teacherlist[i].t_info.get_id() == tid)
			{


				for (int j = 0; j < ccount; j++)
				{
					char _choice;
					cout << "\n\t\t\t--------------Offered Courses-------------- " << endl;
					courselist[j].displayCourseInfo();
					cout << "Do you want to assign this course ???????" << endl;
					cin >> _choice;
					if (_choice == 'Y' || _choice == 'y')
					{
						if (courselimit < 3)
						{
							teacherlist[i].set_techRegisteredCourse(courselist[j].getCode());
							courselimit++;
						}
						else
						{
							cout << "You can only registered in 3 courses" << endl;
							break;

						}
					}

				}

			}

		}
	}
	void displayTeacher()
	{
		for (int k = 0; k < tcount; k++)
		{

			teacherlist[k].display();

		}
	}
	void displayTeacherEnrolledCourses(string tid)
	{
		for (int i = 0; i < tcount; i++)
		{
			cout << tid << " are registered in the following courses " << endl;
			int size = 0;
			size = teacherlist[i].get_tecRegistered_courselistSize();
			if (size < 0)
			{
				cout << "Teacher not registered in any course " << endl;
				break;
			}
			else
			{
				if (tid == teacherlist[i].t_info.get_id())
				{
					for (int j = 0; j < teacherlist[i].get_tecRegistered_courselistSize(); j++)
					{
						for (int k = 0; k < ccount; k++)
						{
							if (courselist[k].getCode() == teacherlist[i].get_techRegisteredCourse(j))
							{
								courselist[k].displayCourseInfo();
								break;
							}
						}
					}
					break;
				}

			}

		}


	}
	/*void DeleteregisterdStudent(string stu_id)
	{
		for (int i = 0; i < scount; i++)
		{

			if (studentlist[i].info.get_id() == stu_id)
			{
				for (int j = i; j < scount; j++)
				{
					studentlist[j] = studentlist[j + 1];
				}
				scount--;
			}

		}

	}*/
	void displaystd()
	{
		for (int i = 0; i < scount; i++)
		{
            studentlist[i].displayStudentInfo();
		}
	}
};
class student_resolve :protected admin
{
public:
	admin a;
	Student studentlist[2];
	Course courselist[3];
	Teacher teacherlist[2];
	attendance attendanceList[3][2];
	Assesment stuAssesment[3][2];
	int subjectTotal[6];
public:
	void setStudent_resolve(const admin &ta)
	{
		a = ta;
		for (int i = 0; i < a.scount; i++)
		{
			studentlist[i] = a.getStdList(i);
		}
		for (int i = 0; i < a.ccount; i++)
		{
			courselist[i] = a.getcourseslist(i);
		}
		for (int i = 0; i < a.tcount; i++)
		{
			teacherlist[i] = a.getTeacherlist(i);
		}

	}
	void RegisteredStudentCourses(string ID)
	{
		for (int i = 0; i < a.scount; i++)
		{
			if (studentlist[i].info.get_id() == ID)
			{
				int  courselimit = 0;
				for (int j = 0; j < a.ccount; j++)
				{
					char _choice;
					cout << "\n--------------Offered Courses-------------\n";
					courselist[j].displayCourseInfo();
					cout << "\n\t\t\tDo you want to register in this course ???????" << endl;
					cin >> _choice;
					if (_choice == 'Y' || _choice == 'y')
					{
						if (courselimit < 2)
						{

							studentlist[i].setStudent_Registered_Course(courselist[j].getCode());
							courselist[j].setStulist(studentlist[i].info.get_id());

							courselimit++;
							cout << "\n\t\t\tCourse registered successfully!!!!!!! " << endl;
						}
						else
						{
							cout << "\n\t\t\tYou can only registered in 3 courses!!!!!!!" << endl;
							break;

						}
					}
				}
			}

		}


	}
	void Addassesment(string tid, string courseId)
	{
		cout << "\n\t\t\t~~~~~~~~~~~~~~~~~~Add Assesment~~~~~~~~~~~~~~~~~" << endl;
		for (int k = 0; k < a.tcount; k++)
		{
			if (teacherlist[k].t_info.get_id() == tid)
			{

				for (int l = 0; l < teacherlist[k].get_tecRegistered_courselistSize(); l++)
				{
					if (teacherlist[k].get_techRegisteredCourse(l) == courseId)
					{
						for (int i = 0; i < a.ccount; i++)
						{
							if (courselist[i].getCode() == teacherlist[k].get_techRegisteredCourse(l))

							{
								cout << "\n\t\t\tCourse Code : " << courselist[i].getCode() << endl;;
								int marks;
								string Type;
								cout << "\n\t\t\tAssesment Type ";
								cin >> Type;
								cout << "\n\t\t\tEnter Marks";
								cin >> marks;
								courselist[i].addAssessment(marks, Type);
								cout << "\n\t\t\tAssesment  Added Successfully!!!!!!!!!" << endl;

							}
						}
					}
				}
			}
		}

	}
	void AssignMarks(string Id, string courseId, string id)
	{
		cout << "\n\t\t\t~~~~~~~~~~~~~~~~~~Assign Marks~~~~~~~~~~~~~~~~~" << endl;
		for (int k = 0; k < a.tcount; k++)
		{

			if (teacherlist[k].t_info.get_id() == Id)
			{

				for (int l = 0; l < teacherlist[k].get_tecRegistered_courselistSize(); l++)
				{
					if (teacherlist[k].get_techRegisteredCourse(l) == courseId)
					{
						for (int i = 0; i < a.ccount; i++)
						{
							if (courselist[i].getCode() == teacherlist[k].get_techRegisteredCourse(l))
							{
								int total = 0;
								cout << "\n\t\t\tCourse Name : " << courselist[i].getCode() << endl;

								for (int m = 0; m < courselist[i].get_Student_Assements_Count(); m++)
								{
									cout << "\n\t\t\t" << courselist[i].getAssesmentype(m) << "       " << "Total Marks " << courselist[i].getMarks(m) << endl;
									for (int j = 0; j < courselist[i].getscount(); j++)
									{
										if (courselist[i].getstulist(j) == id)
										{

											cout << "\n\t\t\t" << courselist[i].getstulist(j);
											cout << "                   ";
											int Marks;
											cin >> Marks;

											total = total + Marks;
											courselist[i].addTotal(total, i, j);
											courselist[i].setStudentAssesment(Marks, m, j);
										}

									}

								}


							}
						}
					}
				}
			}
		}
	}
	void VeiwAssignMarks(string Id, string courseId, string id)
	{
		cout << "~~~~~~~~~~~~~~~~~~Mark Sheet~~~~~~~~~~~~~~~~~" << endl;
		for (int k = 0; k < a.tcount; k++)
		{

			if (teacherlist[k].t_info.get_id() == Id)
			{
				for (int l = 0; l < teacherlist[k].get_tecRegistered_courselistSize(); l++)
				{
					if (teacherlist[k].get_techRegisteredCourse(l) == courseId)
					{
						for (int i = 0; i < a.ccount; i++)
						{
							if (courselist[i].getCode() == teacherlist[k].get_techRegisteredCourse(l))
							{
								cout << "\n\t\t\tCourse Name : " << courselist[i].getCode() << endl;
								for (int m = 0; m < courselist[i].get_Student_Assements_Count(); m++)
								{
									cout << "\n\t\t\t" << courselist[i].getAssesmentype(m) << "        " << "Total Marks" << courselist[i].getMarks(m) << endl;
									for (int j = 0; j < courselist[i].getscount(); j++)
									{
										if (courselist[i].getstulist(j) == id)
										{
											cout << "\n\t\t\t" << courselist[i].getstulist(j);
											cout << "            ";
											cout << courselist[i].getStudentAssesment(m, j);
											cout << endl;

										}

									}
									cout << endl;
								}

							}
						}
					}
				}

			}
		}
		
	}
		
	void markAttendance(string Id, string courseId)
	{
		cout << "\n\t\t\t~~~~~~~~~~~~~~~~~~Mark Attendance~~~~~~~~~~~~~~~~~" << endl;
		for (int k = 0; k < a.tcount; k++)
		{

			if (teacherlist[k].t_info.get_id() == Id)
			{

				for (int i = 0; i < teacherlist[k].get_tecRegistered_courselistSize(); i++)
				{


					if (courselist[i].getCode() == courseId)
					{
						cout << "/n/t/t/tCourse Name : " << courselist[i].getCode() << endl;
						for (int m = 0; m < 3; m++)
						{

							cout << "/n/t/t/t------------Lecture #" << m + 1 << "-------------" << endl;
							for (int j = 0; j < courselist[i].getscount(); j++)
							{


								cout << courselist[i].getstulist(j);

								cout << "         ";

								char P;
								cin >> P;
								attendanceList[m][j].setAttendance(P);
								courselist[i].addAttendence(attendanceList[m][j].getAttendance(), m, j);
							}

						}


					}
				}
			}
		}
	}
	void VeiwmarkAttendance(string Id, string courseId)
	{

		for (int k = 0; k < a.tcount; k++)
		{
			if (teacherlist[k].t_info.get_id() == Id)
			{

				for (int i = 0; i < teacherlist[k].get_tecRegistered_courselistSize(); i++)
				{
					if (courselist[i].getCode() == courseId)
					{
						cout << "\n\t\t\tCourse Name : ";
						cout << courselist[i].getCode() << endl;
						for (int m = 0; m < 3; m++)
						{
							cout << "\n\t\t\t------------Lecture #" << m + 1 << "-------------" << endl;
							for (int j = 0; j < courselist[i].getscount(); j++)
							{
								cout << courselist[i].getstulist(j);
								cout << "          ";
								cout << courselist[i].getAttendance(m, j);
								cout << endl;


							}
							cout << endl;
						}

					}
				}
			}
		}
	}
	void VeiwmarkAttendancebystudent(string Id, string courseId, string id)
	{

		for (int k = 0; k < a.tcount; k++)
		{
			if (teacherlist[k].t_info.get_id() == Id)
			{

				for (int i = 0; i < teacherlist[k].get_tecRegistered_courselistSize(); i++)
				{
					if (courselist[i].getCode() == courseId)
					{
						cout << "\n\t\t\tCourse Name : ";
						cout << courselist[i].getCode() << endl;
						for (int m = 0; m < 3; m++)
						{
							cout << "\n\t\t\t------------Lecture #" << m + 1 << "-------------" << endl;
							for (int j = 0; j < courselist[i].getscount(); j++)
							{
								if (courselist[i].getstulist(j) == id)
								{
									cout << courselist[i].getstulist(j);
									cout << "          ";
									cout << courselist[i].getAttendance(m, j);
									cout << endl;
								}

							}
							cout << endl;
						}

					}
				}
			}
		}
	}
	void displayStudentinfo()
	{
		cout << a.scount;
		for (int k = 0; k < a.scount; k++)
		{

			studentlist[k].displayStudentInfo();

		}
	}
	void displayEnrolledCourses(string studentId)
	{
		for (int i = 0; i < a.scount; i++)
		{
			cout << studentId << " are registered in the following courses " << endl;
			if (studentId == studentlist[i].info.get_id())
			{
				cout << studentlist[i].getRegistered_CourselistSize();
				for (int j = 0; j < studentlist[i].getRegistered_CourselistSize(); j++)
				{
					for (int k = 0; k < a.ccount; k++)
					{
						if (courselist[k].getCode() == studentlist[i].getStudent_Registered_Course_Code(j))
						{
							courselist[k].displayCourseInfo();
							break;
						}
					}
				}
				break;
			}
		}


	}
	void dropregisterdcourse(string stu_id, string password)
	{
		for (int i = 0; i < a.scount; i++)
		{
			if (studentlist[i].info.get_id() != stu_id)
			{
				cout << "Invalid ID !!!!!!!!" << endl;

			}
			if (studentlist[i].info.getPassword() != password)
			{
				cout << "Incorrect Password!!!!!!!!" << endl;
				break;
			}
			int r_course = 0;
			if (studentlist[i].info.get_id() == stu_id)
			{
				r_course = studentlist[i].getRegistered_CourselistSize();

				for (int j = 0; j < r_course; j++)
				{
					char _choice;
					cout << "\n\t\t\tYour registered course code is:";
					cout << studentlist[i].getStudent_Registered_Course_Code(j);
					cout << "\t\t\tDo you want to remove this course?????(Y/N) " << endl;
					cin >> _choice;
					if (_choice == 'Y' || _choice == 'y')
					{
						studentlist[i].dropcourse(j);
						courselist[j].dropstudent(stu_id);
						cout << "\t\t\tCourses drop successfully" << endl;
					}
				}
			}
		}

	}


};
int main()
{

	string s1, s2 = "admin123";
	string p1, p2 = "UET";
	string first_name;
	string last_name;
	string tid;
	string cid;
	string sid;
	string password;
	int tday;
	int tmonth;
	int tyear;
	int d2, m2, y2;
	string address;
	long long int pNo;
	date j_date;
	date DOB;
	personal_info i;
	Student s;
	Teacher t;
	Course c;
	admin a;
	student_resolve sr;
	int Choice;
o:cout << "\n\n\n\n      \t\t\t=======================LEARNING MANAGEMENT SYSTEM=======================" << endl;
	cout << "\t\t\t\t\tPress 1 if you are admin" << endl;
	cout << "\t\t\t\t\tPress 2 if you are a student " << endl;
	cout << "\t\t\t\t\tPress 3 if you are a Teacher " << endl;
	cout << "\t\t\t\t\tEnter Choice : ";
	cin >> Choice;
	system("cls");
	switch (Choice)
	{
	case 1:
	{
	h: cout << "\n\t\t\tEnter Your userlname : ";
		cin >> s1;
		cout << "\n\t\t\tEnter your Password : ";
		cin >> p1;
		if ((s1 != s2 || p1 != p2) || (s1 != s2 && s1 != s2))
		{
			cout << "Invalid Cerdential " << endl;
			goto h;
		}
	k:cout << "\n\n\n\n\t\t\t\t=======================ADMIN PORTAL=======================" << endl;
		cout << "\t\t\t\t\tPress 1 for add student " << endl;
		cout << "\t\t\t\t\tPress 2 for add teacher" << endl;
		cout << "\t\t\t\t\tPress 3 for add courses" << endl;
		cout << "\t\t\t\t\tPress 4 for Assign course to teacher" << endl;
		cout << "\t\t\t\t\tPress 5 for Remove Student " << endl;
		int choice1;
		cout << "\t\t\t\t\tEnter Choice : ";
		cin >> choice1;
		system("cls");
		switch (choice1)
		{


		case 1:
		{
			cout << "\n\n\n\n       \t\t\t=======================ENTER STUDENT INFORMATION=======================" << endl;
			cout << "\n\t\t\tEnter the First name of the Student : ";
			cin >> first_name;
			cout << "\n\t\t\tEnter the Last name of the Student : ";
			cin >> last_name;
			cout << "\n\t\t\tEnter the ID of the Student : ";
			cin >> sid;
			cout << "\n\t\t\tAssign Password to the student : ";
			cin >> password;
			cout << "\n\t\t\tEnter the date of Joining" << endl;
			cout << "\t\t\tDay :";
			cin >> tday;
			cout << "\t\t\tMonth :";
			cin >> tmonth;
			cout << "\t\t\tYear :";
			cin >> tyear;
			cout << "\n\t\t\tEnter the date of Birth" << endl;
			cout << "\t\t\tDay :";
			cin >> d2;
			cout << "\t\t\tMonth :";
			cin >> m2;
			cout << "\t\t\tYear :";
			cin >> y2;
			cout << "\n\t\t\tEnter Home Address : ";
			cin.ignore();
			getline(cin, address);
			cout << "\n\t\t\tEnter phone No : ";
			cin >> pNo;
			j_date.setdate(tday, tmonth, tyear);
			DOB.setdate(d2, m2, y2);
			i.set_Personalinfo(password, first_name, last_name, sid, j_date, DOB, address, pNo);
			//i.display_Personalinfo();
			/*j_date.setdate(2, 10, 2020);
			DOB.setdate(2, 10, 2001);
			i.set_Personalinfo("M", "Merub", "Rafique", "2020CS610", j_date, DOB, "Lahore", 997804);*/
			s.setStudent(i);
			a.addStudent(s);
			break;
		}
		case 2:
		{
			cout << "\n\n\n\n       \t\t\t=======================ENTER TEACHER INFORMATION=======================" << endl;
			cout << "\n\t\t\tEnter the First name of the Teacher : ";
			cin >> first_name;
			cout << "\n\t\t\tEnter the Last name of the Teacher : ";
			cin >> last_name;
			cout << "\n\t\t\tEnter the ID of the Teacher : ";
			cin >> tid;
			cout << "\n\t\t\tAssign Password to the teacher : ";
			cin >> password;
			cout << "\n\t\t\tEnter the date of Joining " << endl;
			cout << "\t\t\tDay :";
			cin >> tday;
			cout << "\t\t\tMonth :";
			cin >> tmonth;
			cout << "\t\t\tYear :";
			cin >> tyear;
			cout << "\n\t\t\tEnter the date of Birth" << endl;
			cout << "\t\t\tDay :";
			cin >> d2;
			cout << "\t\t\tMonth :";
			cin >> m2;
			cout << "\t\t\tYear :";
			cin >> y2;
			cout << "\n\t\t\tEnter Home Address : ";
			cin.ignore();
			getline(cin, address);
			cout << "\n\t\t\tEnter phone No : ";
			cin >> pNo;
			j_date.setdate(tday, tmonth, tyear);
			DOB.setdate(d2, m2, y2);
			/*j_date.setdate(2, 10, 2021);
			DOB.setdate(6, 10, 1999);
			i.set_Personalinfo("A", "Aizaz", "Akmal", "Aizaz123", j_date, DOB, "Lahore", 2467367482);*/
			i.set_Personalinfo(password, first_name, last_name, tid, j_date, DOB, address, pNo);
			t.set_Teacher(i);
			a.addTeacher(t);
			break;

		}
		case 3:
		{
			cout << "\n\n\n\n       \t\t\t=======================ENTER COURSE INFORMATION=======================" << endl;
			string cCode;
			float credit_hour;
			cout << "\n\t\t\tEnter name of the course : ";
			cin.ignore();
			getline(cin, first_name);
			cout << "\n\t\t\tEnter course code : ";
			cin >> cCode;
			cout << "\n\t\t\tEnter Credit hour : ";
			cin >> credit_hour;
			cout << "\n\t\t\tEnter the course starting date " << endl;
			cout << "\t\t\tDay :";
			cin >> d2;
			cout << "\t\t\tMonth :";
			cin >> m2;
			cout << "\t\t\tYear :";
			cin >> y2;
			j_date.setdate(d2, m2, y2);
			c.setCourse(first_name, cCode, credit_hour, j_date);
			/*j_date.setdate(2, 10, 2020);
			c.setCourse("OOP", "OOP2020",3, j_date);*/
			a.addCourse(c);
			break;
		}
		case 4:
		{
			cout << "\n\t\t\tEnter the ID of the Teacher" << endl;
			cin >> tid;
			a.AssignTeacher(tid);
			break;
		}

		case 5:
		{
			string sid;
			cout << "\n\t\t\tEnter id";
			cin >> sid;
			//a.DeleteregisterdStudent(sid);
			break;
		}
		case 6:
		{
			a.displaystd();
		}
		}
		char choice;
		cout << "Whould you like to run another operation(Y/N)" << endl;
		cin >> choice;
		system("cls");
		if (choice == 'Y' || choice == 'y')
		{
			goto k;
		}
		{
			break;
		}

		break;
	}
	case 2:
	{
		sr.setStudent_resolve(a);
	l:cout << "\n\n\n\n\t\t\t\t=======================STUDENT PORTAL=======================" << endl;
		cout << "\t\t\t\t\tPress 1 for student register courses " << endl;
		cout << "\t\t\t\t\tPress 2 for student  to drop any course " << endl;
		cout << "\t\t\t\t\tPress 3 to diplay enrolled course" << endl;
		cout << "\t\t\t\t\tPress 4 for display student info" << endl;
		cout << "\t\t\t\t\tPress 5 for display attedance" << endl;

		int choice2;
		cout << "\t\t\t\t\tEnter Choice : ";
		cin >> choice2;

		system("cls");
		switch (choice2)
		{
		case 1:
		{
			cout << "Enter student ID" << endl;
			cin >> sid;
			cout << "Enter Password " << endl;
			cin >> password;

			sr.RegisteredStudentCourses(sid);
			break;
		}
		case 2:
		{
			cout << "Enter student ID" << endl;
			cin >> sid;
			cout << "Enter Password " << endl;
			cin >> password;
			sr.dropregisterdcourse(sid, password);

			break;
		}
		case 3:
		{
			cout << "Enter Student ID" << endl;
			cin >> sid;
			cout << "Enter Password " << endl;
			cin >> password;
			sr.displayEnrolledCourses(sid);
			break;
		}
		case 4:
		{
			sr.displayStudentinfo();

			break;
		}
		case 5:
		{
			cout << "Enter Teacher ID" << endl;
			cin >> tid;
			cout << "Enter Course ID " << endl;
			cin >> password;
			cout << "Enter studentID" << endl;
			cin >> sid;
			sr.VeiwmarkAttendancebystudent(tid, password, sid);

			break;
		}

		}
		char choice;
		cout << "Whould you like to run another operation(Y/N)" << endl;
		cin >> choice;
		system("cls");
		if (choice == 'Y' || choice == 'y')
		{
			goto l;
		}
		if (choice == 'N' || choice == 'n')
		{
			break;
		}
		break;
	}

	case 3:
	{
	m:int choice3;
		cout << "\n\n\n\n\t\t\t\t=======================Teacher PORTAL=======================" << endl;
		cout << "\t\t\t\t\tPress 1 for display Teacher data " << endl;
		cout << "\t\t\t\t\tPress 2 for dispaly teacher enrolled courses " << endl;
		cout << "\t\t\t\t\tPress 3 for marking Attendance " << endl;
		cout << "\t\t\t\t\tPress 4 for add assesment " << endl;
		cout << "\t\t\t\t\tPress 5 for assign marks of assesment " << endl;
		cout << "\t\t\t\t\tPress 6 for veiw marks of assesment " << endl;
		cout << "\t\t\t\t\tPress 7 for veiw DMC " << endl;
		cout << "\t\t\t\t\tPress 8 for display Teacher enrolled courses" << endl;

		cout << "\t\t\t\t\tEnter Choice : ";
		cin >> choice3;
		system("cls");
		switch (choice3)
		{
		case 1:
		{
			a.displayTeacher();
			break;
		}
		case 3:
		{
			cout << "Enter Teacher ID" << endl;
			cin >> tid;
			cout << "Enter Course ID " << endl;
			cin >> password;
			sr.VeiwmarkAttendance(tid, password);
			break;

			break;
		}
		case 4: {
			cout << "Enter Teacher ID" << endl;
			cin >> tid;
			cout << "Enter Course code of the Course " << endl;
			cin >> cid;
			sr.Addassesment(tid, cid);
			break;

		}
		case 5:
		{
			cout << "Enter Teacher ID" << endl;
			cin >> tid;
			cout << "Enter Course code of the Course " << endl;
			cin >> cid;
			cout << "Enter student id " << endl;
			cin >> sid;
			sr.AssignMarks(tid, cid, sid);
			break;
		}
		case 6:
		{
			cout << "Enter Teacher ID" << endl;
			cin >> tid;
			cout << "Enter Course code of the Course " << endl;
			cin >> cid;
			cout << "Enter student id " << endl;
			cin >> sid;
			sr.VeiwAssignMarks(tid, cid, sid);
			break;
		}

		case 7:
		{
			cout << "Enter student id " << endl;
			cin >> sid;
			//sr.veiwDMC(sid);
			break;
		}
		case 8:
		{
			cout << "Enter Teacher id" << endl;
			cin >> tid;
			a.displayTeacherEnrolledCourses(tid);
			break;
		}
		break;
		}
		char choice;
		cout << "Whould you like to run another operation(Y/N)" << endl;
		cin >> choice;
		system("cls");
		if (choice == 'Y' || choice == 'y')
		{
			goto m;
		}
		if (choice == 'N' || choice == 'n')
		{
			break;
		}
		break;
	}

	default:
	{
		cout << "Invalid input" << endl;
		cout << "Enter valid number " << endl;
		goto k;
	}

	}
	char choice;
	cout << "you wanna change the user (Y/N)" << endl;
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		goto o;
	}
	if (choice == 'N' || choice == 'n')
	{
		exit(0);
	}

}
