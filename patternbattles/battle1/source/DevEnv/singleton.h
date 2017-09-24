#pragma once

#include <string>

class FileManager
{
private:
	FileManager();
public:
	static FileManager& get();

	void Write(std::string file, std::string data);
	void FileManager::Read(std::string file, std::string &out);

	FileManager& operator()(void);

	~FileManager();
};

