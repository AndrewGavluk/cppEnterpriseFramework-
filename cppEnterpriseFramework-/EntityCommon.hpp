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
	EntityCommon();
	~EntityCommon();

private:
	bool m_Delete;
	uint64_t m_Guid;
	std::string m_Name;
	time_t m_CreationTime;
	
	AttribStruct m_Attributes;
	TablesMap m_TablesMap;
	FormMap	m_FormMap;
};

