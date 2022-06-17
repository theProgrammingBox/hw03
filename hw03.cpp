#include "Programmer.h"
#include "SoftwareArchitect.h"

int main()
{

    Employee employee1;
	employee1.setName("Jimmy Fallon");
	employee1.setId(12345);
	employee1.setPhone("949-555-1234");
	employee1.setAge(40);
	employee1.setGen("M");
	employee1.setJob("Comedian");
	employee1.setSalary("$100,000");
    Date date1;
	date1.setMonth("08");
	date1.setDay("31");
	date1.setYear("2014");
	employee1.setHire(date1);
	cout << "Employee 1:" << endl;
	cout << employee1 << "\n\n";

	Employee employee2;
	employee2.setName("Stephen Colbert");
	employee2.setId(12346);
	employee2.setPhone("310-555-5555");
	employee2.setAge(51);
	employee2.setGen("M");
	employee2.setJob("Comedian");
	employee2.setSalary("$70,123");
	Date date2;
	date2.setMonth("05");
	date2.setDay("08");
	date2.setYear("2015");
	employee2.setHire(date2);
	cout << "Employee 2:" << endl;
	cout << employee2 << "\n\n";

	Employee employee3;
	employee3.setName("James Corden");
	employee3.setId(87654);
	employee3.setPhone("703-703-1234");
	employee3.setAge(37);
	employee3.setGen("M");
	employee3.setJob("Talk Show Host");
	employee3.setSalary("$900,000");
	Date date3;
	date3.setMonth("12");
	date3.setDay("25");
	date3.setYear("2014");
	employee3.setHire(date3);
	cout << "Employee 3:" << endl;
	cout << employee3 << "\n\n";

	Date date4;
	date4.setMonth("03");
	date4.setDay("01");
	date4.setYear("2005");
    Employee employee4("Katie Couric", 77777, "203-555-6789", 58, "F", "News reporter", "$500,500", date4);
	cout << "Employee 4:" << endl;
	cout << employee4 << "\n\n";

	Programmer programmer1;
	programmer1.setName("Sam Software");
	programmer1.setId(54321);
	programmer1.setPhone("819-123-4567");
	programmer1.setAge(21);
	programmer1.setGen("M");
	programmer1.setJob("Programmer");
	programmer1.setSalary("$223,000");
	Date date5;
	date5.setMonth("12");
	date5.setDay("24");
	date5.setYear("2011");
	programmer1.setHire(date5);
	programmer1.setDepartmentNumber(5432122);
	programmer1.setSupervisorName("Joe Boss");
	programmer1.setPercentageIncrease(4);
	programmer1.setKnowsCpp(true);
	programmer1.setKnowsJava(false);
	cout << "Programmer 1:" << endl;
	cout << programmer1 << "\n\n";

	Programmer programmer2;
	// programmerDefault.setName("Mary Coder");
	// programmerDefault.setId(65432);
	// programmerDefault.setPhone("310-555-5555");
	// programmerDefault.setAge(28);
	// programmerDefault.setGen("F");
	// programmerDefault.setJob("Programmer");
	// programmerDefault.setSalary("$770,123");
	// date.setMonth("02");
	// date.setDay("08");
	// date.setYear("2010");
	// programmerDefault.setHire(date);
	// programmerDefault.printProgrammerData();

    // softwareArchitectDefault.setName("Alex Arch");
    // softwareArchitectDefault.setId(88888);
	// softwareArchitectDefault.setPhone("819-123-4444");
	// softwareArchitectDefault.setAge(31);
	// softwareArchitectDefault.setGen("M");
	// softwareArchitectDefault.setJob("Architect");
	// softwareArchitectDefault.setSalary("$323,000");
	// date.setMonth("12");
	// date.setDay("24");
	// date.setYear("2009");
	// softwareArchitectDefault.setHire(date);
	// softwareArchitectDefault.printSoftwareArchitectData();

	// softwareArchitectDefault.setDepartmentNumber(5434222);
	// softwareArchitectDefault.setSupervisorName("Big Boss");
	// softwareArchitectDefault.setPercentageIncrease(5);
	// softwareArchitectDefault.setYearsOfExperience(4);
	// softwareArchitectDefault.printSoftwareArchitectData();

	// softwareArchitectDefault.setName("Sally Designer");
	// softwareArchitectDefault.setId(65434);
	// softwareArchitectDefault.setPhone("310-555-8888");
	// softwareArchitectDefault.setAge(38);
	// softwareArchitectDefault.setGen("F");
	// softwareArchitectDefault.setJob("Architect");
	// softwareArchitectDefault.setSalary("$870,123");
	// date.setMonth("02");
	// date.setDay("08");
	// date.setYear("2003");
	// softwareArchitectDefault.setHire(date);
	// softwareArchitectDefault.printSoftwareArchitectData();

    return 0;
}