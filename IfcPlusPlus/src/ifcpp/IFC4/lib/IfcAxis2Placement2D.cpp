/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAxis2Placement2D 
IfcAxis2Placement2D::IfcAxis2Placement2D() {}
IfcAxis2Placement2D::IfcAxis2Placement2D( int id ) { m_entity_id = id; }
IfcAxis2Placement2D::~IfcAxis2Placement2D() {}
shared_ptr<BuildingObject> IfcAxis2Placement2D::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAxis2Placement2D> copy_self( new IfcAxis2Placement2D() );
	if( m_Location ) { copy_self->m_Location = dynamic_pointer_cast<IfcCartesianPoint>( m_Location->getDeepCopy(options) ); }
	if( m_RefDirection ) { copy_self->m_RefDirection = dynamic_pointer_cast<IfcDirection>( m_RefDirection->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAxis2Placement2D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCAXIS2PLACEMENT2D" << "(";
	if( m_Location ) { stream << "#" << m_Location->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RefDirection ) { stream << "#" << m_RefDirection->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcAxis2Placement2D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAxis2Placement2D::toString() const { return L"IfcAxis2Placement2D"; }
void IfcAxis2Placement2D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAxis2Placement2D, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Location, map );
	readEntityReference( args[1], m_RefDirection, map );
}
void IfcAxis2Placement2D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPlacement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RefDirection", m_RefDirection ) );
}
void IfcAxis2Placement2D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPlacement::getAttributesInverse( vec_attributes_inverse );
}
void IfcAxis2Placement2D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPlacement::setInverseCounterparts( ptr_self_entity );
}
void IfcAxis2Placement2D::unlinkFromInverseCounterparts()
{
	IfcPlacement::unlinkFromInverseCounterparts();
}
