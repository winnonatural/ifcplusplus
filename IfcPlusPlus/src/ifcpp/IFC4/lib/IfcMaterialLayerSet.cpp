/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMaterialLayer.h"
#include "ifcpp/IFC4/include/IfcMaterialLayerSet.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialLayerSet 
IfcMaterialLayerSet::IfcMaterialLayerSet() {}
IfcMaterialLayerSet::IfcMaterialLayerSet( int id ) { m_entity_id = id; }
IfcMaterialLayerSet::~IfcMaterialLayerSet() {}
shared_ptr<BuildingObject> IfcMaterialLayerSet::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialLayerSet> copy_self( new IfcMaterialLayerSet() );
	for( size_t ii=0; ii<m_MaterialLayers.size(); ++ii )
	{
		auto item_ii = m_MaterialLayers[ii];
		if( item_ii )
		{
			copy_self->m_MaterialLayers.push_back( dynamic_pointer_cast<IfcMaterialLayer>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_LayerSetName ) { copy_self->m_LayerSetName = dynamic_pointer_cast<IfcLabel>( m_LayerSetName->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialLayerSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALLAYERSET" << "(";
	writeEntityList( stream, m_MaterialLayers );
	stream << ",";
	if( m_LayerSetName ) { m_LayerSetName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialLayerSet::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialLayerSet::toString() const { return L"IfcMaterialLayerSet"; }
void IfcMaterialLayerSet::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialLayerSet, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_MaterialLayers, map );
	m_LayerSetName = IfcLabel::createObjectFromSTEP( args[1], map );
	m_Description = IfcText::createObjectFromSTEP( args[2], map );
}
void IfcMaterialLayerSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcMaterialDefinition::getAttributes( vec_attributes );
	if( m_MaterialLayers.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> MaterialLayers_vec_object( new AttributeObjectVector() );
		std::copy( m_MaterialLayers.begin(), m_MaterialLayers.end(), std::back_inserter( MaterialLayers_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "MaterialLayers", MaterialLayers_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "LayerSetName", m_LayerSetName ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
}
void IfcMaterialLayerSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialLayerSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialLayerSet> ptr_self = dynamic_pointer_cast<IfcMaterialLayerSet>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcMaterialLayerSet::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_MaterialLayers.size(); ++i )
	{
		if( m_MaterialLayers[i] )
		{
			m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse = ptr_self;
		}
	}
}
void IfcMaterialLayerSet::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_MaterialLayers.size(); ++i )
	{
		if( m_MaterialLayers[i] )
		{
			if( !m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse.expired() )
			{
				shared_ptr<IfcMaterialLayerSet> self_candidate( m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse );
				if( self_candidate.get() == this )
				{
					weak_ptr<IfcMaterialLayerSet>& self_candidate_weak = m_MaterialLayers[i]->m_ToMaterialLayerSet_inverse;
					self_candidate_weak.reset();
				}
			}
		}
	}
}
