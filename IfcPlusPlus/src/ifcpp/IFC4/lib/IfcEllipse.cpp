/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4/include/IfcEllipse.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcEllipse 
IfcEllipse::IfcEllipse() {}
IfcEllipse::IfcEllipse( int id ) { m_entity_id = id; }
IfcEllipse::~IfcEllipse() {}
shared_ptr<BuildingObject> IfcEllipse::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcEllipse> copy_self( new IfcEllipse() );
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement>( m_Position->getDeepCopy(options) ); }
	if( m_SemiAxis1 ) { copy_self->m_SemiAxis1 = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_SemiAxis1->getDeepCopy(options) ); }
	if( m_SemiAxis2 ) { copy_self->m_SemiAxis2 = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_SemiAxis2->getDeepCopy(options) ); }
	return copy_self;
}
void IfcEllipse::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCELLIPSE" << "(";
	if( m_Position ) { m_Position->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_SemiAxis1 ) { m_SemiAxis1->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SemiAxis2 ) { m_SemiAxis2->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcEllipse::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcEllipse::toString() const { return L"IfcEllipse"; }
void IfcEllipse::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcEllipse, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Position = IfcAxis2Placement::createObjectFromSTEP( args[0], map );
	m_SemiAxis1 = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
	m_SemiAxis2 = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
}
void IfcEllipse::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcConic::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "SemiAxis1", m_SemiAxis1 ) );
	vec_attributes.push_back( std::make_pair( "SemiAxis2", m_SemiAxis2 ) );
}
void IfcEllipse::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcConic::getAttributesInverse( vec_attributes_inverse );
}
void IfcEllipse::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcConic::setInverseCounterparts( ptr_self_entity );
}
void IfcEllipse::unlinkFromInverseCounterparts()
{
	IfcConic::unlinkFromInverseCounterparts();
}
