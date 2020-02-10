#include "EntityCommon.hpp"

template <typename AttribStruct, typename TablesMap, typename FormMap>
	EntityCommon< AttribStruct,  TablesMap,  FormMap>
		::EntityCommon(std::string m_Name, std::string m_Alias)
{
		/* TODO: 
			- generating m_Guid
			- set m_Name
			- set m_Alias
			- set m_state
			- set m_CreationTime
			*/
}

template <typename AttribStruct, typename TablesMap, typename FormMap>
	EntityCommon< AttribStruct, TablesMap, FormMap>
		::~EntityCommon()
{
		/* TODO: 
			delete
			m_FormMap
			m_TablesMap
			m_Attributes
		*/
}

template <typename AttribStruct, typename TablesMap, typename FormMap>
void EntityCommon< AttribStruct, TablesMap, FormMap>
::deleter()
{
	// TODO: set delete flag in  m_state flag group
}

template <typename AttribStruct, typename TablesMap, typename FormMap>
void EntityCommon< AttribStruct, TablesMap, FormMap>
::undoDeleter()
{
	// TODO: unset delete flag in  m_state flag group
}

