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
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcObjectDefinition 
IfcObjectDefinition::IfcObjectDefinition() {}
IfcObjectDefinition::IfcObjectDefinition( int id ) { m_entity_id = id; }
IfcObjectDefinition::~IfcObjectDefinition() {}
shared_ptr<BuildingObject> IfcObjectDefinition::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcObjectDefinition> copy_self( new IfcObjectDefinition() );
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
	return copy_self;
}
void IfcObjectDefinition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOBJECTDEFINITION" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcObjectDefinition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcObjectDefinition::toString() const { return L"IfcObjectDefinition"; }
void IfcObjectDefinition::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcObjectDefinition, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
}
void IfcObjectDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRoot::getAttributes( vec_attributes );
}
void IfcObjectDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRoot::getAttributesInverse( vec_attributes_inverse );
	if( m_HasAssignments_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasAssignments_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasAssignments_inverse.size(); ++i )
		{
			if( !m_HasAssignments_inverse[i].expired() )
			{
				HasAssignments_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAssigns>( m_HasAssignments_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasAssignments_inverse", HasAssignments_inverse_vec_obj ) );
	}
	if( m_Nests_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Nests_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Nests_inverse.size(); ++i )
		{
			if( !m_Nests_inverse[i].expired() )
			{
				Nests_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelNests>( m_Nests_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "Nests_inverse", Nests_inverse_vec_obj ) );
	}
	if( m_IsNestedBy_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> IsNestedBy_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsNestedBy_inverse.size(); ++i )
		{
			if( !m_IsNestedBy_inverse[i].expired() )
			{
				IsNestedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelNests>( m_IsNestedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsNestedBy_inverse", IsNestedBy_inverse_vec_obj ) );
	}
	if( m_HasContext_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasContext_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasContext_inverse.size(); ++i )
		{
			if( !m_HasContext_inverse[i].expired() )
			{
				HasContext_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDeclares>( m_HasContext_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasContext_inverse", HasContext_inverse_vec_obj ) );
	}
	if( m_IsDecomposedBy_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> IsDecomposedBy_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_IsDecomposedBy_inverse.size(); ++i )
		{
			if( !m_IsDecomposedBy_inverse[i].expired() )
			{
				IsDecomposedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAggregates>( m_IsDecomposedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsDecomposedBy_inverse", IsDecomposedBy_inverse_vec_obj ) );
	}
	if( m_Decomposes_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> Decomposes_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Decomposes_inverse.size(); ++i )
		{
			if( !m_Decomposes_inverse[i].expired() )
			{
				Decomposes_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAggregates>( m_Decomposes_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "Decomposes_inverse", Decomposes_inverse_vec_obj ) );
	}
	if( m_HasAssociations_inverse.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> HasAssociations_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasAssociations_inverse.size(); ++i )
		{
			if( !m_HasAssociations_inverse[i].expired() )
			{
				HasAssociations_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAssociates>( m_HasAssociations_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasAssociations_inverse", HasAssociations_inverse_vec_obj ) );
	}
}
void IfcObjectDefinition::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRoot::setInverseCounterparts( ptr_self_entity );
}
void IfcObjectDefinition::unlinkFromInverseCounterparts()
{
	IfcRoot::unlinkFromInverseCounterparts();
}
