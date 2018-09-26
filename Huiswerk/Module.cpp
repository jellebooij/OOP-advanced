#include "Module.h"
#include <iostream>
#include <sstream>

Module::Module(std::string naam, Docent docent) : naam(naam), docent(docent){}

void Module::print()
{
	std::stringstream stream;

	stream << "Module naam: " + naam << std::endl;
	stream << "Docent: " + docent.getName() << std::endl;
	stream << "Studenten: " + studenten.size() << std::endl;

	for (int i = 0; i < studenten.size(); i++) {
		stream << "  " + studenten[i].getName();
	}

	std::cout << stream.str();
}

void Module::addStudent(const Student& student)
{
	studenten.push_back(student);
}

void Module::removeStudent(Student student)
{
	studenten.
}

void Module::updateEc(int ec)
{
}
