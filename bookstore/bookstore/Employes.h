#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class Employee
{
public:
	String^ name;
	String^ position;
	String^ salary;
	String^ shift;
	String^ aadhar;
	String^ contact;
	String^ address;

	void createBook(String^ name, String^ position, String^ salary, String^ shift, String^ aadhar, String^ contact, String^ address)
	{
		// String^ fname = id + ".txt";
		String^ towrite = name + "," + position + "," + salary + "," + shift + "," + aadhar + "," + contact + "," + address;
		StreamWriter^ wr = File::AppendText("EmployeeBook.csv");
		wr->WriteLine(towrite);
		wr->Close();

	}



};