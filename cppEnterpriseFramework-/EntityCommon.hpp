#pragma once
#include <cstdint>
#include <string>
#include <ctime>

template <typename AttribStruct, 
	typename TablesMap,
	typename FormMap>
class EntityCommon	
{
public:
	delete EntityCommon();
	EntityCommon(std::string, std::string);
	~EntityCommon();

	void deleter();
	void undoDeleter();

private:
	uint64_t m_Guid;
	std::string m_Name;

	uint8_t m_state;

	std::string m_Alias;
	time_t m_CreationTime;
	
	FormMap & m_FormMap;
	TablesMap & m_TablesMap;
	AttribStruct & m_Attributes;
};

