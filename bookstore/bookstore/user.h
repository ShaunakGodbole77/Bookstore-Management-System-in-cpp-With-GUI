#pragma once
#using <system.dll>
using namespace System;
using namespace System::IO;

ref class user
{
	System::String^ uname;
	System::String^ psw;

public:
	void get_details(System::String^ uname_, System::String^ psw_)
	{
		uname = uname_;
		psw = psw_;
	}

	bool validate(System::String^ name, System::String^ psw_)
	{
		if (uname == name && psw == psw_)
		{
			return true;
		}
		return false;
	}

	void create(String^ uname_, String^ psw_)
	{
		String^ fname = uname_ + ".txt";
		StreamWriter^ wr = gcnew StreamWriter(fname);
		wr->WriteLine(psw_);
		wr->Close();
	}

	bool validateUser(String^ uname_, String^ psw_)
	{
		String^ fname = uname_ + ".txt";
		try
		{
			StreamReader^ re = File::OpenText(fname);
			String^ str;
			if ((str = re->ReadLine()) != nullptr)
			{
				if (str == psw_)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		catch (Exception^ e)
		{

		}
		return false;
	}


};

