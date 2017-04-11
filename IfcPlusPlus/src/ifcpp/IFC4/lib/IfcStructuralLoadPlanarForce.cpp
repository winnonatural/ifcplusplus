/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPlanarForceMeasure.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadPlanarForce.h"

// ENTITY IfcStructuralLoadPlanarForce 
IfcStructuralLoadPlanarForce::IfcStructuralLoadPlanarForce() {}
IfcStructuralLoadPlanarForce::IfcStructuralLoadPlanarForce( int id ) { m_id = id; }
IfcStructuralLoadPlanarForce::~IfcStructuralLoadPlanarForce() {}
shared_ptr<IfcPPObject> IfcStructuralLoadPlanarForce::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadPlanarForce> copy_self( new IfcStructuralLoadPlanarForce() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_PlanarForceX ) { copy_self->m_PlanarForceX = dynamic_pointer_cast<IfcPlanarForceMeasure>( m_PlanarForceX->getDeepCopy(options) ); }
	if( m_PlanarForceY ) { copy_self->m_PlanarForceY = dynamic_pointer_cast<IfcPlanarForceMeasure>( m_PlanarForceY->getDeepCopy(options) ); }
	if( m_PlanarForceZ ) { copy_self->m_PlanarForceZ = dynamic_pointer_cast<IfcPlanarForceMeasure>( m_PlanarForceZ->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralLoadPlanarForce::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSTRUCTURALLOADPLANARFORCE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_PlanarForceX ) { m_PlanarForceX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PlanarForceY ) { m_PlanarForceY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PlanarForceZ ) { m_PlanarForceZ->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcStructuralLoadPlanarForce::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcStructuralLoadPlanarForce::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadPlanarForce, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_PlanarForceX = IfcPlanarForceMeasure::createObjectFromSTEP( args[1], map );
	m_PlanarForceY = IfcPlanarForceMeasure::createObjectFromSTEP( args[2], map );
	m_PlanarForceZ = IfcPlanarForceMeasure::createObjectFromSTEP( args[3], map );
}
void IfcStructuralLoadPlanarForce::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcStructuralLoadStatic::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "PlanarForceX", m_PlanarForceX ) );
	vec_attributes.push_back( std::make_pair( "PlanarForceY", m_PlanarForceY ) );
	vec_attributes.push_back( std::make_pair( "PlanarForceZ", m_PlanarForceZ ) );
}
void IfcStructuralLoadPlanarForce::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcStructuralLoadStatic::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadPlanarForce::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcStructuralLoadStatic::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadPlanarForce::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadStatic::unlinkFromInverseCounterparts();
}