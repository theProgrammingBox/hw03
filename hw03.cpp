#include "Programmer.h"
#include "SoftwareArchitect.h"

int main()
{
    Date date;
    Employee employeeDefault;
	Programmer programmerDefault;
	SoftwareArchitect softwareArchitectDefault;

	employeeDefault.printEmployeeHeader();

	employeeDefault.setName("Jimmy Fallon");
	employeeDefault.setId(12345);
	employeeDefault.setPhone("949-555-1234");
	employeeDefault.setAge(40);
	employeeDefault.setGen("M");
	employeeDefault.setJob("Comedian");
	employeeDefault.setSalary("$100,000");
	date.setMonth("08");
	date.setDay("31");
	date.setYear("2014");
	employeeDefault.setHire(date);
    employeeDefault.printEmployeeData();

	employeeDefault.setName("Stephen Colbert");
	employeeDefault.setId(12346);
	employeeDefault.setPhone("310-555-5555");
	employeeDefault.setAge(51);
	employeeDefault.setGen("M");
	employeeDefault.setJob("Comedian");
	employeeDefault.setSalary("$70,123");
	date.setMonth("05");
	date.setDay("08");
	date.setYear("2015");
	employeeDefault.setHire(date);
	employeeDefault.printEmployeeData();

	employeeDefault.setName("James Corden");
	employeeDefault.setId(87654);
	employeeDefault.setPhone("703-703-1234");
	employeeDefault.setAge(37);
	employeeDefault.setGen("M");
	employeeDefault.setJob("Talk Show Host");
	employeeDefault.setSalary("$900,000");
	date.setMonth("12");
	date.setDay("25");
	date.setYear("2014");
	employeeDefault.setHire(date);
	employeeDefault.printEmployeeData();

	date.setMonth("03");
	date.setDay("01");
	date.setYear("2005");
    Employee employeeNonDefault("Katie Couric", 77777, "203-555-6789", 58, "F", "News reporter", "$500,500", date);
	employeeNonDefault.printEmployeeData();

	programmerDefault.printEmployeeHeader();
	programmerDefault.setName("Sam Software");
	programmerDefault.setId(54321);
	programmerDefault.setPhone("819-123-4567");
	programmerDefault.setAge(21);
	programmerDefault.setGen("M");
	programmerDefault.setJob("Programmer");
	programmerDefault.setSalary("$223,000");
	date.setMonth("12");
	date.setDay("24");
	date.setYear("2011");
	programmerDefault.setHire(date);
	programmerDefault.printProgrammerData();

	programmerDefault.setDepartmentNumber(5432122);
	programmerDefault.setSupervisorName("Joe Boss");
	programmerDefault.setPercentageIncrease(4);
	programmerDefault.setKnowsCpp(true);
	programmerDefault.setKnowsJava(false);
	programmerDefault.printProgrammerData();

	programmerDefault.setName("Mary Coder");
	programmerDefault.setId(65432);
	programmerDefault.setPhone("310-555-5555");
	programmerDefault.setAge(28);
	programmerDefault.setGen("F");
	programmerDefault.setJob("Programmer");
	programmerDefault.setSalary("$770,123");
	date.setMonth("02");
	date.setDay("08");
	date.setYear("2010");
	programmerDefault.setHire(date);
	programmerDefault.printProgrammerData();

    softwareArchitectDefault.setName("Alex Arch");
    softwareArchitectDefault.setId(88888);
	softwareArchitectDefault.setPhone("819-123-4444");
	softwareArchitectDefault.setAge(31);
	softwareArchitectDefault.setGen("M");
	softwareArchitectDefault.setJob("Architect");
	softwareArchitectDefault.setSalary("$323,000");
	date.setMonth("12");
	date.setDay("24");
	date.setYear("2009");
	softwareArchitectDefault.setHire(date);
	softwareArchitectDefault.printSoftwareArchitectData();

	softwareArchitectDefault.setDepartmentNumber(5434222);
	softwareArchitectDefault.setSupervisorName("Big Boss");
	softwareArchitectDefault.setPercentageIncrease(5);
	softwareArchitectDefault.setYearsOfExperience(4);
	softwareArchitectDefault.printSoftwareArchitectData();

	softwareArchitectDefault.setName("Sally Designer");
	softwareArchitectDefault.setId(65434);
	softwareArchitectDefault.setPhone("310-555-8888");
	softwareArchitectDefault.setAge(38);
	softwareArchitectDefault.setGen("F");
	softwareArchitectDefault.setJob("Architect");
	softwareArchitectDefault.setSalary("$870,123");
	date.setMonth("02");
	date.setDay("08");
	date.setYear("2003");
	softwareArchitectDefault.setHire(date);
	softwareArchitectDefault.printSoftwareArchitectData();

    return 0;
}