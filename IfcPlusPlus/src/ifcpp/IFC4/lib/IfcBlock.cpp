/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcBlock.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcBlock 
IfcBlock::IfcBlock() {}
IfcBlock::IfcBlock( int id ) { m_entity_id = id; }
IfcBlock::~IfcBlock() {}
shared_ptr<BuildingObject> IfcBlock::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBlock> copy_self( new IfcBlock() );
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_XLength ) { copy_self->m_XLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_XLength->getDeepCopy(options) ); }
	if( m_YLength ) { copy_self->m_YLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_YLength->getDeepCopy(options) ); }
	if( m_ZLength ) { copy_self->m_ZLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_ZLength->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBlock::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBLOCK" << "(";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_XLength ) { m_XLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_YLength ) { m_YLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ZLength ) { m_ZLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcBlock::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBlock::toString() const { return L"IfcBlock"; }
void IfcBlock::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBlock, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Position, map );
	m_XLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
	m_YLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
	m_ZLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
}
void IfcBlock::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCsgPrimitive3D::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "XLength", m_XLength ) );
	vec_attributes.push_back( std::make_pair( "YLength", m_YLength ) );
	vec_attributes.push_back( std::make_pair( "ZLength", m_ZLength ) );
}
void IfcBlock::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCsgPrimitive3D::getAttributesInverse( vec_attributes_inverse );
}
void IfcBlock::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCsgPrimitive3D::setInverseCounterparts( ptr_self_entity );
}
void IfcBlock::unlinkFromInverseCounterparts()
{
	IfcCsgPrimitive3D::unlinkFromInverseCounterparts();
}
