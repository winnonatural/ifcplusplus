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
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcObjectTypeEnum.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelAssigns 
IfcRelAssigns::IfcRelAssigns() {}
IfcRelAssigns::IfcRelAssigns( int id ) { m_entity_id = id; }
IfcRelAssigns::~IfcRelAssigns() {}
shared_ptr<BuildingObject> IfcRelAssigns::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelAssigns> copy_self( new IfcRelAssigns() );
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
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.push_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatedObjectsType ) { copy_self->m_RelatedObjectsType = dynamic_pointer_cast<IfcObjectTypeEnum>( m_RelatedObjectsType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelAssigns::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELASSIGNS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcRelAssigns::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelAssigns::toString() const { return L"IfcRelAssigns"; }
void IfcRelAssigns::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssigns, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_RelatedObjects, map );
	m_RelatedObjectsType = IfcObjectTypeEnum::createObjectFromSTEP( args[5], map );
}
void IfcRelAssigns::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelationship::getAttributes( vec_attributes );
	if( m_RelatedObjects.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> RelatedObjects_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedObjects.begin(), m_RelatedObjects.end(), std::back_inserter( RelatedObjects_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "RelatedObjects", RelatedObjects_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "RelatedObjectsType", m_RelatedObjectsType ) );
}
void IfcRelAssigns::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAssigns::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssigns> ptr_self = dynamic_pointer_cast<IfcRelAssigns>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelAssigns::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		if( m_RelatedObjects[i] )
		{
			m_RelatedObjects[i]->m_HasAssignments_inverse.push_back( ptr_self );
		}
	}
}
void IfcRelAssigns::unlinkFromInverseCounterparts()
{
	IfcRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		if( m_RelatedObjects[i] )
		{
			std::vector<weak_ptr<IfcRelAssigns> >& HasAssignments_inverse = m_RelatedObjects[i]->m_HasAssignments_inverse;
			for( auto it_HasAssignments_inverse = HasAssignments_inverse.begin(); it_HasAssignments_inverse != HasAssignments_inverse.end(); )
			{
				weak_ptr<IfcRelAssigns> self_candidate_weak = *it_HasAssignments_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_HasAssignments_inverse;
					continue;
				}
				shared_ptr<IfcRelAssigns> self_candidate( *it_HasAssignments_inverse );
				if( self_candidate.get() == this )
				{
					it_HasAssignments_inverse= HasAssignments_inverse.erase( it_HasAssignments_inverse );
				}
				else
				{
					++it_HasAssignments_inverse;
				}
			}
		}
	}
}
