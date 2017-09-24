#include "singleton.h"
#include "tier0.h"

FileManager& FileManager::get()
{
	static FileManager *instance = new FileManager();

	return *instance;
}

void FileManager::Write(std::string file, std::string data)
{
	Bootil::File::Write(file, data);
}

void FileManager::Read(std::string file, std::string &out)
{
	Bootil::File::Read(file, out);
}

FileManager& FileManager::operator()(void)
{
	return get();
}

FileManager::FileManager()
{
}

FileManager::~FileManager()
{
}
