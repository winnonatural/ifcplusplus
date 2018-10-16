/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelServicesBuildings.h"
#include "ifcpp/IFC4/include/IfcSpatialElement.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcSpatialElement 
IfcSpatialElement::IfcSpatialElement() {}
IfcSpatialElement::IfcSpatialElement( int id ) { m_entity_id = id; }
IfcSpatialElement::~IfcSpatialElement() {}
shared_ptr<BuildingObject> IfcSpatialElement::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSpatialElement> copy_self( new IfcSpatialElement() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createBase64Uuid<wchar_t>().data() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_LongName ) { copy_self->m_LongName = dynamic_pointer_cast<IfcLabel>( m_LongName->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSpatialElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSPATIALELEMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_LongName ) { m_LongName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSpatialElement::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSpatialElement::toString() const { return L"IfcSpatialElement"; }
void IfcSpatialElement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSpatialElement, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_LongName = IfcLabel::createObjectFromSTEP( args[7], map );
}
void IfcSpatialElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcProduct::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "LongName", m_LongName ) );
}
void IfcSpatialElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcProduct::getAttributesInverse( vec_attributes_inverse );
	if( m_ContainsElements_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ContainsElements_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ContainsElements_inverse.size(); ++i )
		{
			if( !m_ContainsElements_inverse[i].expired() )
			{
				ContainsElements_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelContainedInSpatialStructure>( m_ContainsElements_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ContainsElements_inverse", ContainsElements_inverse_vec_obj ) );
	}
	if( m_ServicedBySystems_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ServicedBySystems_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ServicedBySystems_inverse.size(); ++i )
		{
			if( !m_ServicedBySystems_inverse[i].expired() )
			{
				ServicedBySystems_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelServicesBuildings>( m_ServicedBySystems_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ServicedBySystems_inverse", ServicedBySystems_inverse_vec_obj ) );
	}
	if( m_ReferencesElements_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> ReferencesElements_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ReferencesElements_inverse.size(); ++i )
		{
			if( !m_ReferencesElements_inverse[i].expired() )
			{
				ReferencesElements_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelReferencedInSpatialStructure>( m_ReferencesElements_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ReferencesElements_inverse", ReferencesElements_inverse_vec_obj ) );
	}
}
void IfcSpatialElement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProduct::setInverseCounterparts( ptr_self_entity );
}
void IfcSpatialElement::unlinkFromInverseCounterparts()
{
	IfcProduct::unlinkFromInverseCounterparts();
}
