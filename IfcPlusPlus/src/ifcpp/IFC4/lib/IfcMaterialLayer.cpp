/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialLayer.h"
#include "ifcpp/IFC4/include/IfcMaterialLayerSet.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialLayer 
IfcMaterialLayer::IfcMaterialLayer() {}
IfcMaterialLayer::IfcMaterialLayer( int id ) { m_entity_id = id; }
IfcMaterialLayer::~IfcMaterialLayer() {}
shared_ptr<BuildingObject> IfcMaterialLayer::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialLayer> copy_self( new IfcMaterialLayer() );
	if( m_Material ) { copy_self->m_Material = dynamic_pointer_cast<IfcMaterial>( m_Material->getDeepCopy(options) ); }
	if( m_LayerThickness ) { copy_self->m_LayerThickness = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_LayerThickness->getDeepCopy(options) ); }
	if( m_IsVentilated ) { copy_self->m_IsVentilated = dynamic_pointer_cast<IfcLogical>( m_IsVentilated->getDeepCopy(options) ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Category ) { copy_self->m_Category = dynamic_pointer_cast<IfcLabel>( m_Category->getDeepCopy(options) ); }
	if( m_Priority ) { copy_self->m_Priority = dynamic_pointer_cast<IfcInteger>( m_Priority->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialLayer::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALLAYER" << "(";
	if( m_Material ) { stream << "#" << m_Material->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_LayerThickness ) { m_LayerThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_IsVentilated ) { m_IsVentilated->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Category ) { m_Category->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Priority ) { m_Priority->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialLayer::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialLayer::toString() const { return L"IfcMaterialLayer"; }
void IfcMaterialLayer::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialLayer, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Material, map );
	m_LayerThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[1], map );
	m_IsVentilated = IfcLogical::createObjectFromSTEP( args[2], map );
	m_Name = IfcLabel::createObjectFromSTEP( args[3], map );
	m_Description = IfcText::createObjectFromSTEP( args[4], map );
	m_Category = IfcLabel::createObjectFromSTEP( args[5], map );
	m_Priority = IfcInteger::createObjectFromSTEP( args[6], map );
}
void IfcMaterialLayer::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcMaterialDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Material", m_Material ) );
	vec_attributes.push_back( std::make_pair( "LayerThickness", m_LayerThickness ) );
	vec_attributes.push_back( std::make_pair( "IsVentilated", m_IsVentilated ) );
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "Category", m_Category ) );
	vec_attributes.push_back( std::make_pair( "Priority", m_Priority ) );
}
void IfcMaterialLayer::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcMaterialDefinition::getAttributesInverse( vec_attributes_inverse );
	vec_attributes_inverse.push_back( std::make_pair( "ToMaterialLayerSet_inverse", shared_ptr<BuildingEntity>( m_ToMaterialLayerSet_inverse ) ) );
}
void IfcMaterialLayer::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcMaterialDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcMaterialLayer::unlinkFromInverseCounterparts()
{
	IfcMaterialDefinition::unlinkFromInverseCounterparts();
}
