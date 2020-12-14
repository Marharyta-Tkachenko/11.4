#include "pch.h"
#include "CppUnitTest.h"
#include "../Project11.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			towar s;
			towar str;
			towar str_a;
			towar str_b;
			fstream f;

			fstream file_s("C:\\ÃÓˇ Ô‡ÔÍ‡\\Student [Tkachenko.Marharyta.IK-11]\\Lab_11.4\Lab_11.4\\test", ios::binary);

			s.n_towar = "wew";
			s.vart≥st = 22;
			s.kilkist = 12;
			s.units = (measurement)2;
			s.masa = 10;

			s.n_towar = "ewe";
			s.vart≥st = 4;
			s.kilkist = 2;
			s.units = (measurement)2;
			s.masa = 10;

			file_s.write((char*)&s, sizeof(towar));
			file_s.close();

			SortBIN(str, str_a, str_b, 3, "—:\\ÃÓˇ Ô‡ÔÍ‡\\Student [Tkachenko.Marharyta.IK-11]\\Lab_11.4\Lab_11.4\\test", f, false);

			file_s.read((char*)&s, sizeof(towar));
			Assert::AreEqual(s.vart≥st, 4);
			file_s.close();
		}
	};
}
