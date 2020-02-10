#pragma once
#include "EntityCommon.hpp"

template <typename AttribStruct, typename TablesMap, typename FormMap>
class Process : public EntityCommon < AttribStruct, TablesMap, FormMap>
{
public:
	Process(std::string m_Name, std::string m_Alias) :EntityCommon <AttribStruct, TablesMap, FormMap>(std::string m_Name, std::string m_Alias);
	
	void compliter();
	void undoComplite();

private:
};
	 