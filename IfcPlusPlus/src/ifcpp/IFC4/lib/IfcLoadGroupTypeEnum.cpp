/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcLoadGroupTypeEnum.h"

// TYPE IfcLoadGroupTypeEnum = ENUMERATION OF	(LOAD_GROUP	,LOAD_CASE	,LOAD_COMBINATION	,USERDEFINED	,NOTDEFINED);
IfcLoadGroupTypeEnum::IfcLoadGroupTypeEnum() {}
IfcLoadGroupTypeEnum::~IfcLoadGroupTypeEnum() {}
shared_ptr<IfcPPObject> IfcLoadGroupTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLoadGroupTypeEnum> copy_self( new IfcLoadGroupTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLoadGroupTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLOADGROUPTYPEENUM("; }
	if( m_enum == ENUM_LOAD_GROUP )
	{
		stream << ".LOAD_GROUP.";
	}
	else if( m_enum == ENUM_LOAD_CASE )
	{
		stream << ".LOAD_CASE.";
	}
	else if( m_enum == ENUM_LOAD_COMBINATION )
	{
		stream << ".LOAD_COMBINATION.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcLoadGroupTypeEnum> IfcLoadGroupTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	shared_ptr<IfcLoadGroupTypeEnum> type_object( new IfcLoadGroupTypeEnum() );
	if( boost::iequals( arg, L".LOAD_GROUP." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_GROUP;
	}
	else if( boost::iequals( arg, L".LOAD_CASE." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_CASE;
	}
	else if( boost::iequals( arg, L".LOAD_COMBINATION." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_COMBINATION;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}